/*SINGLY LINKED LISTS[INSERT,DISPLAY,COUNT,SEARCH,DELETE]*/
#include <stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node*next;};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,k,flag,c=0;
	while(1){
		printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.SEARCH AN ELEMENT\n5.DELETE\n6.EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
		case 1:{
			printf("\nEnter data: ");
			scanf("%d",&entry);
			if(head==NULL){
				head=(struct node*)malloc(sizeof(struct node));
				head->data=entry;
				pos=head;
				tail=head;}
			else{
				tail->next=(struct node*)malloc(sizeof(struct node));
				tail=tail->next;
				tail->data=entry;}
				break;}
		case 2:{
			pos=head;
			if(pos==NULL){
				printf("nothing to display\n");
				break;}
			else{
				printf("Elements are: ");
				while(pos!=NULL){
					printf("\t%d",pos->data);
					pos=pos->next;}
			break;}}
		case 3:{
			c=0;
			pos=head;
			while(pos!=NULL){
				pos=pos->next;
				c++;}
			printf("The number of elements are: %d",c);
			break;}
		case 4:{
			flag=0;
			printf("Enter an element to search: ");
			scanf("%d",&k);
			pos=head;
			while(pos!=NULL){
				if(pos->data==k){
					flag=1;}
			pos=pos->next;}
			if (flag==1){
				printf("\nELEMENT FOUND\n");}
			else{
				printf("\nELEMENT NOT FOUND\n");}
				break;}
		case 5:{
			struct node *temp=head;
			if(head==NULL){
				printf("Empty");
				break;}
			printf("\nEnter position of data: ");
			scanf("%d",&entry);
			c=0;
			pos=head;
			while(pos!=NULL){
				pos=pos->next;
				c++;}
			if(entry>c){
				printf("Out of range");
				break;}
			else if(entry==0){
				head=head->next;
				temp->next=NULL;
				free(temp);
				printf("\nDELETED!\n");}
			else{
				for(int i=0;i<entry-1;i++)
					temp=temp->next;
					struct node *del=temp->next;
					temp->next=temp->next->next;
					del->next=NULL;
					free(del);
					printf("\nDELETED!\n");}
					break;}
			
		case 6:{
			printf("\nGoodbye");
			exit(0);}
		default:
			printf("Wrong input\n");}
		}
	}
