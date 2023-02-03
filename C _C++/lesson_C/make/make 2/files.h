#include<stdio.h>

char* files(){
	
    static char name[256];
    scanf("%[^\n]s",name);
    
    return name;
    
    }
