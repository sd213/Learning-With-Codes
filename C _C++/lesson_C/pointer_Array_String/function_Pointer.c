/*as  pointer can point any location in memory ,   function pointer can also point to  any 
  start of executable code (or) simply other functions .
 
 * pointer to function (or) function pointer point to executable code for a functions in memory
 
 * a function pointer uses * just  like any pointer.
 
 
 * syntax- returntype (*function_pointer) (parameters)      
 
 * THE PARENTHESIS AROUND (*function_pointer)  ARE IMPORTANT , WITHOUT THEM THE FUNCTION IS RETURNING A  POINTER.
 
 * after declaring pointer you must assigned it to a function*/ 

//ex--

#include<stdio.h>

void func_t(char *p){
	printf("%c",*p);
}

int main(){
		void (*func_ptr) (char * ); // function pointer is declared 
		func_ptr= func_t; // function pointer initialized and & is not written as & is not necessery to use
      //  func_ptr= &func_t; 
		char letter= 's';
		func_ptr(&letter);
		
		return 0;
		}
	
