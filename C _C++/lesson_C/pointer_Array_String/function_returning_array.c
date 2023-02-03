
/* as array can not be returned from a function directly but we 
 * can use array as a pointer to get the array address from function
 */

#include<stdio.h>

int * get_array( ){
	static int num_arr[5]={0,1,2,3,4};
	return (num_arr);
}

int main(){
	int *ptr;
	ptr= get_array(); //array address is returned and stored in pointer
	for (int i=0;i<5;i++){
		printf("%d\n",*(ptr+i));
	}
	return 0;
}
