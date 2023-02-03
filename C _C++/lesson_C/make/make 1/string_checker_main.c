#include<stdio.h>
#include<string.h>
#include "string_check.h"

int main(){

 char string_1[20]={0} ; // = "Buckethead ";
 char string_2 [20]={0}; //"DeathCubeK ";
 
 
 fgets(string_1,20,stdin);
 //while(getchar()=='\n');
 fgets(string_2,20,stdin);
 
 if ((is_anagram(&string_1[0],&string_2[0])) == 0)
 {
	 printf("\n False\n");
 }
 else printf("\n True \n");

return 0;}

