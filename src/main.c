//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>
#define SEUIL 120
#define SEUILH 200
#define SEUILB -100

int main(void)
{
    unsigned char bin[10]={50,60,2,124,85,96,84,127,125,105},i;
	long int sat[10]={rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand()};
	
	for(i=0;i<10;i=i+1)
	{
		if(bin[i]<SEUIL)
			bin[i]=0;
		else 
			bin[i]=1;
	}
	for(i=0;i<10;i=i+1)
	{
		if(sat[i]>=SEUILH)
			sat[i]=SEUILH;
		else if(sat[i]<=SEUILB)
			sat[i]=SEUILB;
	}
	i=0;
		
}
