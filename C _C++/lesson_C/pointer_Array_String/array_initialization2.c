#include<stdio.h>
int main(){

int arr1[2][3]={{1,2,3},{4,5,6}};

	int *p;p= arr1[0];
printf("\n%p is address",p+0);
printf("\n%p is address",p+1);
printf("\n%p is address",p+2);

printf("\n%p is address",p);
printf("\n%p is address",(void *)p);
printf("\n%p is address",arr1+0);
//printf("\n%ls is value",(int *)((int*)(p+1)+2));

printf("\n%d is value",*(*(arr1+1)+2));

printf("\n%d is value",**arr1);
printf("\n%d is value",*((p))+3);

//printf("\n%ls is value", (int *)((int *)(p)));
//("\n%d is address", (int *)((int *)(p+0))+0);

return 0;}

