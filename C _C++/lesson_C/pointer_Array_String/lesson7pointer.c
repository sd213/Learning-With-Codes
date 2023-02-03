//Pointers are used not just to store the address of some variable but also to de-reference and modify the contents of the value at the address its pointing to,
//If pointer is not  strictly typed then it will  give error.

/*Pointers need to be strongly typed because of their usage in pointer arithmetic 
 * which forms the basis for may fundamental aspects of pointer usage.

If we have the following declaration:
type * foo;
and we try foo++, the address stored inside foo is incremented by number of bytes = sizeof(type). 
* This makes life easy  when we do array traversal using a pointer variable.
* 
* 
* */


//pointer variable are strongly typed 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a =1025;
	int *p=&a;
	printf("address of a = %p\n",p);
	printf("value of a =%d\n ", *p); // look at 8 bytes /4bytes depending upon architecture starting from the address of variable  that pointer stored
	
	
	return 0;
}


