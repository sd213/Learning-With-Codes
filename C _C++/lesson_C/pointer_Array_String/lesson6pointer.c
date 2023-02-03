//pointer arithmetic 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a=10;
	int *p =&a;
	
	printf("%p\n",p);  // let p =2001 then p+1 will not be 2002 but  address will be increased by size of variable 
	printf("%p\n",p+1); // will increment the pointer stored variable address by size of the variable 
	printf("%d\n",*(p));
	printf("%d\n",*(p+1)); // now it will show the next  variable(which is consecutive variable of previous variable) stored data 
	printf("%d\n",*p+1); // it will first give the value of *p then it will increment it by 1
	return 0;
}

