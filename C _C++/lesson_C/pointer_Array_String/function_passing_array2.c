/*
 * second method --- direct using pointer 
 * 						
 * but concept of both methods are same as array is considered as pointer


/*  same program but with differentmethod of passing*/

#include <stdio.h>

int array_pass(int *ptr,int size){   // here pointer  is send to function 
 	
	
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=ptr[i];
	}
	return sum;
}

int main(int argc, char **argv)
{
	int arr[2]={2,5};
		
	int sum_of_elements=array_pass(arr,2);
	printf("\n%d is sum of array elements",sum_of_elements);
	
	return 0;
}

