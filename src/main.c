//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	unsigned char nom[100],prenom[100],chaine[100];
	unsigned int annee_naissance;
	
	printf("nom: ");
	scanf("%s",nom);
	printf("prenom: ");
	scanf("%s",prenom);
	printf("annee de naissance: ");
	scanf("%u",&annee_naissance);
	annee_naissance=2018-annee_naissance;
	
	sprintf(chaine,"je m'appelle %s %s et j'ai %u ans",nom,prenom,annee_naissance);
	MessagePopup("phrase",chaine);
	
	
	return 0;
}
