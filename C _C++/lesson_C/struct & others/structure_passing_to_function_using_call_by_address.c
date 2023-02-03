#include<stdio.h>
//although you can not pass the array by call by value directly , but using structure member you can passit easily to other function


struct Test{
	int  arr[5];
	int number;
};

void func(struct Test *t1){
	for (int i=0;i<sizeof(t1->arr)/sizeof(int); i++){  // here compiler will not show any error  like in sample_tst01.c  as using the structute we don't have to worry about array and address of struct Test variable was passed  to fuction.
		
		t1->arr[i]=i+1;
		printf("\n %d",(*t1).arr[i]);
	}
	
	(*t1).number=53;
	printf("\n\n%d is number of struct Test type variable member data",t1->number);
	
		
}
int main(){
	struct Test a1={{1,1,2,3,4},6};
	func(&a1); // address  of structure test variable is sent , that means using struct pointer data of the t1 can be modify
				

	return 0;
}
