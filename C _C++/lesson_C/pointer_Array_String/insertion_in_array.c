//insertion in array 
#include<stdio.h>

int main(){

	int arr[11]={1,2,5,6,7,9,10,20,23};
	
	int n=9;
		
	int element;
	
	printf("\nEnter the element which is to be inserted in array\n");
	scanf("\n%d",&element);
	printf("\n %d is element",element);
	for(int i=n-1;i>=0;i--){
		
		if(element < arr[i]){
			arr[i+1]=arr[i];
			}
			
		else if(element==arr[i]){
			
				arr[i+1]=element;
			}
		else if(element>arr[i]){
			arr[i+1]=element;
			break;
		}
	}
	for(int i=0;i<n;i++){
		printf("\n%d",arr[i]);
	}
	return 0;
}		
			
