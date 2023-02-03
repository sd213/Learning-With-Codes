#include<stdio.h>
int main()
{
	// STRING INPUT;    
	/*  for input functions are 
	 * scanf() , gets(), fgets()
	 * 
	 * scanf ()----
	 * 			syntax-- scanf("%s", string_var);
	 * 				  -- read input according to formal specifiers
	 *                -- stops reading input after encounter space or newline character 
	 * 				  -- to carry on input during encounter space , have to use 
	 * 					 		scanf("%[^\n]s",string_var);
	 * 					in case of character scanf("%[^\n]%c",string_var);
	 * 
	 * gets() ---- 
	 *  		syntax-- gets(array/string_var);
	 * 				  --to read string with spaces , use gets()function
	 * 				  -- read until a terminating newline is reached (ENTER KEY is pressed)
	 * 				  -- it causes buffer overflow , so it is better to use fgets()
	 * 
	 * fgets()----
	 * 			syntax---  fgets(string_var,     no.of characters,    source for reading string);
	 * 				  --it has 3 arguments 
	 * 						- string name
	 * 						- number of characters to read 
	 * 						- a pointer to where you want to read the string from .	ex - stdin
	 * 									stdin means to read string from the standard input ,which is the keyboard
	 * 						- differece between fgets and gets are 
	 * 											-- no.of characters that is needed is passed to fgets function to stop causing problems.
	 * 											-- newline character is get added in fgets() 
	 */ 
 	
	
	
	
	
	
	
	return 0;	
	
}
