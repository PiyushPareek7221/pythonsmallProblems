#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node* head=NULL;
void push(int val){
	struct node *temp=NULL,*p=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(head==NULL)
{
		head=temp;
	}
	else{
	 	temp->next=head;
	 	head=temp;
	}
}
void pop()
{
	struct node*p;
	p=head;
	printf("\npopped element=%d\n",p->data);
	head=head->next;
	free(p);
}
void display(){
	struct node*p;
	p=head;
	while(p!=NULL)
	{
		printf("->%d ",p->data);
		p=p->next;
	}
}
int main(){
	int n,val,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&val);
		push(val);
	}
	printf("\ndisplay\n");
	display();
	printf("\npop 1st element\n");
	pop();
	printf("\npop 2nd element\n");
	pop();
	printf("\ndisplay new stack\n");
	display();
}
