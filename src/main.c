//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>
#define SEUIL 120
#define SEUILH 200
#define SEUILB -100

int main(void)
{
    unsigned char bin[10]={50,60,2,124,85,96,84,127,125,105},miroir[10]={1,2,3,4,5,0,0,0,0,0},a[5]={1,5,9,8,11}, b[5]={0,0,0,0,0}i;
	long int sat[10]={rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand()};
	char dist[10]={4,9,5,3,7,6,2,4,1,0}; 
	
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
	for(i=1;i<9;i=i+1)
	{
		dist[i]=dist[i]-dist[i-1];
	}
	for(i=0;i<5;i=i+1)
	{
		b[i]=a[4-i];
	}
	for(i=0;i<5;i=i+1)
	{
		miroir[i+5]=miroir[4-i];
	}
	
}
