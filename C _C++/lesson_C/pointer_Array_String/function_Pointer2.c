/* array of function pointer
 
 * function pointers can be stored in array and can be  passed as arguments to other functions
 
 * a array of function pointer can replace a switch or an if  statement for choosing an action
 * 
 * syntax-- returntype  (*array_funcion_pointer[size] ) (parameter)
 * 
 */
 #include<stdio.h>
 int add (int num1,int num2);
 int subtract(int num1,int num2);
 int multiply(int num1,int num2);
 int divide(int num1,int num2);
 
 int main(){
	 int x,y,choice,result;
	 
	 int (*operation[4])(int,int);  //declares array of function pointer 
									//each array elements must have same parameters and return type
	
	 operation[0]=add;        
	 operation[1]=subtract;
	 operation[2]=multply;
	 operation[3]=divide;
	                    // another way of initialize array of function pointer  at atime  ofdeclaration --   int (*opetation[4]) (int ,int)={add,subtract,multiply,divide};

	 printf("Enter 2 integers:  ");
	 scanf("%d%d",&x,&y);
	 printf("ENTER 0 to ADD , 1 to SUBTRACT, 2 to MULTIPLY,  3 to DIVIDE  : ");
	 scanf("%d",&choice);
	 result=operation[choice] (x,y);
	 printf("%d is result",result);
	 return 0;
 }
 
 int add(int x,int y){
	 return x+y;
 }
 
 int subtract(int x, int y){
	 return x+y;
 }
 int multiply(int x,int
