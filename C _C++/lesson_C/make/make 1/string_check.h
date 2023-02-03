#include<string.h>
#include<ctype.h>
#include<wctype.h>
#include<stdio.h>

int is_anagram(const char *test, const char *original){
  int eq_ual=0,sum1=0,sum2=0;
  char string1[20]={0},string2[20]={0};
  
  for(int i =0;*(test+i)!='\0';i++){
     
	 
     string1[i]= towupper(*(test+i));
    
  }
  
  
  for(int i =0;*(original+i)!='\0';i++){
     
    
     string2[i]= towupper(*(original+i));
    
  }
  
  printf("\n %s is string_name ",string1);
  printf("\n %s is string_name ", string2);
  
  for(int i=0;string1[i]!='\0';i++){
    
    sum1=sum1+string1[i];
		
  }
  
   
  for(int i=0;string2[i]!='\0';i++){
  
    sum2=sum2+string2[i];
    
  }
  printf("\n%d is sum1, %d is sum2",sum1,sum2);
  if(sum1==sum2){
    eq_ual=1;
  }
  
  
  if(eq_ual!=0){
    return 1;
  }
  else {
    return 0;
  }
}
