//When a variable is declared as being a pointer to type void, it is known as a generic pointer.
// Since you cannot have a variable of type void, the pointer will not point to any data and therefore cannot be dereferenced.
// It is still a pointer though, to use it you just have to cast it to another kind of pointer first.

/*Generic pointers are used when we want to return such pointer which is applicable to all types of pointers. 
 For example return type of malloc function is generic pointer because it can dynamically allocate the memory space to stores integer, float, structure etc.
 *  hence we type cast its return type to appropriate pointer type. 
 Example-

char *c; 
c=(char *)malloc(sizeof(char)); 
*/

#include<stdio.h>
int main(){
	 
	int a=1025;
	int *p;
	p=&a;
	void  *p0; //generic pointer type
	p0= p; 
	printf("Address =%p\n",p0);
	printf("Address =%p\n",(p0+1)); //may generate compilation error but we use p format specifier to ignore it
	
	return 0;
}
