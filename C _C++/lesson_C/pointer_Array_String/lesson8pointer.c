#include<stdio.h>
int main(){

int a=1025;
int *p;
p=&a;
printf("size of integer is %ld bytes \n",sizeof(int));// here use %ld instead of d as sizeof gives long signed int value not int value 
printf("Address =%p , value =%d \n ",p,*p);


char *p0;
p0=(char* )p;// typecasting 

printf("size of char is %ld bytes \n ", sizeof(char));
printf("Address = %p, value =%d \n ", p0,*p0); //due to typecasting the  dereferenced value of  p , the right most byte of value get stored 

//example  			00000000  00000000  00000100  00000001  for 1025
//					--------  --------  --------  --------
//         			  1byte   1byte     1byte     1byte  <--- right and least significant byte 
// the right most byte  are stored  ,  because char takes only one byte SO other bytes are ignored , but if you try to increment the char pointer ,then it will have address of left ones
printf("Address =%p, valur =%d \n",p0+1,*(p0+1)); 

	return 0;
}
