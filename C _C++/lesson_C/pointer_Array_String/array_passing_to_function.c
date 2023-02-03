#include<stdio.h>


void funct_1(int A[],int n) 

/* can be written as " void funct_1(int *A,int n) " , but difference between
 * A[] and *A is 
 * 		--  A[] is pointer to array but we normally called it array 
 * 		-- *A is a pointer to any thing it may be array or other normal variable  . 
 * 	so A[] is a special pointer (as it only points to array instead of other variables)
 * 
 * 
 */
 
 {
	 
	 for(int i=0; i<n; i++){
		 printf("\n%d",A[i]);
	 }
 }
	 
	 
 int main(){
		int array_1[]={2,4,6,8,10};
		funct_1(array_1,5);
	return 0;
	}
	
