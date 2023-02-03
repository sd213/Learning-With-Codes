#include<stdio.h>
/* 
	*if bubblesort has  'n' number of elements to be sorted , then 
	* no.of pass = n-1
	* no.of comparisons = n(n-1)/2
	                       (let 's say for 5 elements ,
	                       it is 4+3+2+1 no.of comparisons which is
	                        mathematically using arithmetric progression , would be n(n-1)/2) 
    * no.of swaps = n(n-1)/2
    * so it's worst case = O(n^2)
    *    and  best case= O(n)
*/
void bubble_sort(int arr[],int n){
	int temp;         // declared to help exchange the variable content
	int flags; 			// used to see if any swap occured
	
	int i,j;        // are for loop initializers
	
	for(i=0;i<n-1;i++)  // as 'n-1' pass will occur of given 'n' elements 
	{
		flags=0;       //flags are set to zero to know if any swap occured in inner for loop
			
			for(j=0; j<n-1-i; j++){
				if(arr[j]>arr[j+1]){
					 temp=arr[j];
					 arr[j]=arr[j+1];
					 arr[j+1]=temp;
					 
					 flags=1; // if the swap will occured in this inner for loop then it will get assigned to 1
				 }
			}
			if(flags==0){  // if array are already sorted then after one pass of inner loop , this if condition will be encountered where outer loop will stop as no required to sort any more
				
				break;
			} 
	}
	
}
int main(){
	int array_list[5]={0,23,76,21,45};
	
	bubble_sort(array_list,5);
	for(int index=0;index<5;index++){
		printf("\n%d",array_list[index]);
	}
	
	return 0;
}
