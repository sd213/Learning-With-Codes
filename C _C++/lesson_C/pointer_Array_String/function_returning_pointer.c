/* when a  called  function returns  pointer the calling/caller function should assign it to the 
 * proper pointer variable 
*/

#include<stdio.h>
int* func1( int  a)
{
	static int var;
	var=a;
	var+=34;
	
	return (&var); //here address of simple variable returned 
}

int*func2( )
{
	static int b=345;
	printf("\n%d is value of b",b);
	static int *ptr;
	ptr=&b;
	*ptr+=45;
	return (ptr);// here value of pointer variable is returned
}


int main(){
		int a=345;
		printf("\n%d is value of a",a);
		int *p1=func1(a);
		printf("\n%d is value of a",*p1);

		
		int *p2=func2();
		printf("\n%d is value of a",*p2);
		return 0;

	}
