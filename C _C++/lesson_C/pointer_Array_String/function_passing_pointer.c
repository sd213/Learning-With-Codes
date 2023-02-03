/* function passing pointer 
 * 	calling function  must have to passed only address
 *  
 */
 #include<stdio.h>
 
 void func1( int *ptr){
	 *ptr = *ptr +2;
 }
 
 
 int main(){
	 int a=90;
	 printf("\n%d is initial value of a \n",a);
	 func1(&a);
	 printf("\n%d is final value of a \n",a);
	 return 0;
 }
