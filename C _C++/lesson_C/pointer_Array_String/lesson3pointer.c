#include<stdio.h>
int main(){
	
double a;
double *p;
a=10;
p=&a; // &  address of a stored in a 	
printf("%p\n ",p ); //address always should be in pointer specific format  that is "%p"
printf("%f\n",*p); // *p = value at address pointed by p 
printf("%f\n",a); // value stored in a 
printf("%p\n",&a);//  address of a
	
	
	return 0;
}
