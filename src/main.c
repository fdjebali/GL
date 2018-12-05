//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	 char ligne1[80] = "Nom: pentagone_B" ; 
	 char ligne2[80] = "Nb points: 5" ; 
	 char ligne3[80] = "Cordonnees:  10 20 30 20 30 40 43 53 35 65" ; 
	 char nom_fig[100];
	 char resultat[100];
	 char erreur[100] = "Erreur dans les parametres";
	 int nb_pts=0;
	 int x[5]={0,0,0,0,0},y[5]={0,0,0,0,0};
	 
	 sscanf(ligne1,"%*s %s",nom_fig);
	 sscanf(ligne2,"%*s %*s %u",&nb_pts);
	 sscanf(ligne3,"%*s %u %u %u %u %u %u %u %u %u %u",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4]);
	 
	 if(nb_pts==0 || nom_fig==0)
		 MessagePopup("erreur",erreur);
			 
		 
	 sprintf(resultat,"La figure %s poss�de %u sommets",nom_fig,nb_pts);
	 MessagePopup("phrase",resultat);
	 	
	return 0;
	
}
    

