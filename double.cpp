#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
};
struct node*head=NULL;
void create(int val){
	struct node*temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->prev=NULL;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else{
		p=head;
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
		temp->prev=p;
	}
}
void revDisplay()
{
	struct node*p;
	p=head;
    while(p->next!=NULL)
    p=p->next;
	while(p->next!=head)
	{
		printf(" ->%d",p->data);
		p=p->prev;
	}
}
int main(){
	int i,l,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&l);
		create(l);
	}
	revDisplay();
	return 0;
}
