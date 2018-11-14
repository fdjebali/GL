//  Copyright (c) 2018 Antoine Tran Tan
//

#include "TP_lib.h"  

int main(void)
{
	short resultat, i=0; 
	while(i<10)
	{
		resultat=LancerDe();
		i++;
	}
	i=0;
}

//Ces lignes réalisent 10 lancers de dés a 6 faces et on garde seulement le resultat du 10 eme lancer
//on obtient au debugger resultat=4 et i=10
