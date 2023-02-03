#include<stdio.h>
struct rectangle{
int length;
int breadth;
};
void initialize(struct rectangle *t,int length,int breadth){
	t->length=length;
	t->breadth=breadth;
}
int area(struct rectangle t){
	return (t.length)*(t.breadth);
}	

void changelength(struct rectangle *t,int length){
	t->length=length;
}
int main(){
	struct rectangle r;
	initialize(&r,10,5);
	
	
	area(r); //it will show no error and value the function returned will not saved
	
	
//	printf("%d is area",area(r));
	changelength(&r,20);
	//printf("%d is area",area(r));
	return 0;
}
