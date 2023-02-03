#include<stdio.h>

void forloop(int i ,int j,int arr[i][j]){

	for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				printf("\n%d",arr[i][j]);
			}
			printf("\n");
		}
	}
				
int main(){

int arr[2][3]={0};
int arr1[2][3]={{1,2,3},{4,5,6}};
//int arr2[2][3]={0};
int arr2[2][3]={{1,2},{3,4},{4,5}};//array_initialization.c:19:29: warning: excess elements in array initializer   19 | int arr2[2][3]={{1,2},{3,4},{4,5}};
int arr3[ ][3]={0};
//int arr4[2][]={0};//array_initialization.c:20:5: error: array type has incomplete element type ‘int[]’



printf("%ld - size  of first \n %ld -size of second\n 	%ld -size of third \n ", sizeof(arr),sizeof(arr1),sizeof(arr2));

forloop(2,3,arr);
forloop(2,3,arr1);

forloop(0,3,arr2);

return 0;
}
/* only 3 ways 2d array can be declared 
  int arr[2][3]={0,1,2,3}; //it is a correct option
int arr1[2][3]={{1,2,3},{4,5,6}};
int arr3[ ][3]={0};
*   and basically you can forget to write row during compile time initialization
* BUT YOU MUST NOT FORGET TO WRITE THE COLUMN NUMBER DURING INITIALIZATION
*/
