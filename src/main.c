//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h> 

int main(void)
{
    int s1=3,s2=3,s3=0,s4=0,n=0,n1=0,a=0,rnd=0;
    while(n<50)
    {
        s1=s1+3*n;
        n=n+1;
    }
    while(a<9876)
    {
        s2=s2+3*n;
        a=3*n;
        n=n+1;
        
    }
	while(n<12)
	{
		rnd=rand()%10+1;
		s3=s3+rnd;
		n=n+1;
	}
    while(n1<20)
    {
        if(n%3==0)
		{
			s4=s4+n;
			n1=n1+1;
		}
        else if(n%7==0)
		{
			s4=s4+n;
			n1=n1+1;
        
        }
		n=n+1;
	}

	
}