//Pointer to structure ---
#include<stdio.h>
#include<stdlib.h>
int main(){
	struct rectangle {
		int length;
		int breadth;
	};
	
	struct rectangle *ptr; 
	
	
	printf("\n%ld is size of pointer \n",sizeof(ptr)); //althouth it is pointer variable which is already created in memory but has not been assigned with been any address of variable , it will show 8 bytesize of pointer
	
	
	ptr=(struct rectangle *)  malloc(sizeof(struct rectangle));  //a room allocated in heap memory and it is address is been assigned to pointer  
	printf("\n%ld is size of pointer \n", sizeof(ptr));//same size will show which is 8 bytes but this time it will contains the address due to allocation in heap 
	
	ptr->length=8;
	(*ptr).breadth=9;
	
	printf("%d is length ,%d  is breadth", (*ptr).length,ptr->breadth);
	return 0;
}
