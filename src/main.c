//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
	unsigned char i=0,j=0,n=0,cpt=0,scoremax=0;
	
	for(n=0;n<100;n++)
	{
		initialiserTirage(); 
		short combi_joueur[6]={1,2,3,4,5,6},combi_gagnante[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()}; 
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(combi_joueur[j]==combi_gagnante[i])
				cpt++;
			if(scoremax<cpt)
			scoremax=cpt;
		}
		
		
	}
	  cpt=0;
	}
	return 0;
	
}
    

