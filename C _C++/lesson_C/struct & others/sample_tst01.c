#include<stdio.h>

void func(int A[]){
	printf("%ld is size of....",sizeof(A)/sizeof(int));  /* sample_tst01.c:4:36: warning: ‘sizeof’ on array function parameter ‘A’ will return size of ‘int *’ [-Wsizeof-array-argument]  You will get this warning
															 * as if you have passed array  address   not array , it will considered as pointer by compiler....
	
}

int main(){
	
		int A[]={4,5,6,7};
		func(A);
		return 0;
	}
	
