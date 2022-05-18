/*SINGLY LINKED LISTS[INSERT,DISPLAY,COUNT]*/
#include <stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node*next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,k,c=0;
	while(1){
		printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.EXIT");
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
					tail=head;
					c=1;}
				else{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
					c++;}
					break;
				}
			case 2:{
				pos=head;
				printf("\nElements are: ");
				while(pos!=NULL){
					printf("\t%d",pos->data);
					pos=pos->next;}
					break;
				}
			case 3:{
				printf("The number of elements are: %d",c);
				break;
				}
			case 4:{
				printf("\nGoodbye");
				exit(0);
				}
			}
		}
	}
