#include<stdio.h>
#include "files.h"
   void pointer() {
		
		char *p=files();
		int n=sizeof(p);
		
		///sizeof(int);
		printf("\n%d is n size\n ",n);
		for (int i=0; p[i]!='\0';i++)
			{
				putchar(p[i]);
			}
			printf("\n");
			//putchar(p[i]);
		
   }

