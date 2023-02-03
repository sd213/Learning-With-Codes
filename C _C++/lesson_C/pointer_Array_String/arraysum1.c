/*
	array can not be passed by value to a function but as array .
	* but we can pass the array using passing address method 
	* 2 ways 
			
			first way---   




 */







#include <stdio.h>

int array_pass(int a[],int size){   // here array is send to function and considered as pointer
 	
	
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=a[i];
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

