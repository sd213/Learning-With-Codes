#include<stdio.h>
#include<stdlib.h>
// structure type variable can be returned from function using pointer

struct Rectangle{
	int length;
	int breadth;
};

struct Rectangle *  func(){
	struct Rectangle *p;
	p= malloc(sizeof(struct Rectangle)); // it will be allocated in heap memory
	p->length=89;
	p->breadth=75;
	
	return (p);
}
int main(){
	struct Rectangle * str_ptr;
	str_ptr=func();
	printf("\n%d is length",str_ptr->length);
	printf("\n%d is breadth",str_ptr->breadth);
	
	return 0;
}
