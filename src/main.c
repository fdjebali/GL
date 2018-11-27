//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
	initialiserTirage(); 
	short combi_joueur[6]={1,2,3,4,5,6},combi_gagnante[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()},i=0,j=0,cpt=0,scoremax=0,n=0;
	
	while(n<100)
	{
		combi_gagnante[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()};
		n++;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(combi_joueur[j]==combi_gagnante[i])
				cpt++;
		}
		if(cpt>scoremax)
			scoremax=cpt;
	}
	}
	
	i=0;
}
    

