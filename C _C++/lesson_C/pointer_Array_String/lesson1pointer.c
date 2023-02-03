#include<stdio.h>
int main(){
	
	int a; // may give warning as it is not used 
	int *p;
	printf("%d\n",p); // may  give error  during runtime check the variable p is being used without initializing 
	
	
	
	return 0;
}
