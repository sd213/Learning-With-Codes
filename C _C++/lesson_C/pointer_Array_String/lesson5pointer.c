#include<stdio.h>
int main(){
	
	int a=10;
	int *p=&a; // is same as int * p=&a;
	printf("&a = %p ,p=  %p",&a,p);
	return 0;
}
