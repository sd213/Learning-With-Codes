#include<stdio.h>
int main(){
	int a;
	int *p;
	a=10;
	p=&a; // &a=address of a
	printf("a= %d\n",a);
	*p=12; //dereferencing (obtain the address of a data item held in another location from (a pointer)) the value 
	printf("a= %d\n",a);
	
	int b=20;
	*p=b; 
	printf("a= %d\n",a);
	printf("a= %d\n",*p);
	
	int c=35;
	*p=&c;
	printf("a= %d\n",a);
	printf("a= %d\n",*p); // will give warning that assignment to int for int* makes integer pointer without a cast 
	
	int d=56;
	p=&d;
	printf("a= %d\n",a); // a doesnot change any more as pointer now store address of another variable
	printf("a= %d\n",*p);
	return 0;
}
