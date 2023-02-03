#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};




int main(){
	int choice =0;
	struct node *headptr,*temp,*newnode=NULL;
	headptr=NULL;
	printf("\n ENTER CHOICE");
	printf("\n 1:creation " );
	printf("\n 2:show " );
	
	printf("\n 3: exit \n: " );
	scanf("%d",&choice);
	while(choice != 3){
		newnode=malloc(sizeof(struct node));
		printf("\nEnter data for new item : ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(headptr==NULL){
			headptr=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		newnode=0;
		printf("\n ENTER CHOICE");
		printf("\n 1:creation " );
		printf("\n 2:show " );
		printf("\n 3:exit \n : " );
		
		scanf("%d",&choice);
		
		if(choice != 1){
			temp=headptr;
			if(choice==2){
			while(temp!= NULL){
				printf("\n data-%d",temp->data);
				printf("\n address-%p",temp->next);
				temp=temp->next;
				}
			}
			
		}
		printf("\n ENTER CHOICE");
		printf("\n 1:creation " );
		printf("\n 2:show " );
		printf("\n 3:exit \n : " );
		
		scanf("%d",&choice);
	}	
		
	
	
	return 0;
	}
