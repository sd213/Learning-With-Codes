#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* array can not be directly returned from an function 
 * but we can return it in form of  address .
 * so function must  return pointer and to do that we we have to write asterisk after the return type 
 */
 
int * fun(int n){
	int *p;
	p=(int *) malloc (n * sizeof (int)); 
	return(p); 
}



int main(){
	
	printf("\n   You want to continue the code  then type YES in capital letters \n --");
	char continu_e[4];
	scanf("%[^\n]s",continu_e);
	
	if(!strcmp(continu_e,"YES")){
			
	int *A;
	int arr_size=7;
	
	A=fun(arr_size);

	for (int i=0; i<arr_size;i++){
		*(A+i)=i;
		printf("\n%d",A[i]);
	}
		return 0;
	}
	
	else{
		return 0;
	}
	
}

