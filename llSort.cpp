#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head=NULL;
void create(int val)
{
	struct node*temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else{
		p=head;
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
	}
}
void sort()
{
	struct node*i,*j,*p;
	int temp;
	p=head;
	for(i=head;i->next!=NULL;i=i->next)
	for(j=i->next;j!=NULL;j=j->next)
	if(i->data>j->data)
	{
		temp=i->data;
		i->data=j->data;
		j->data=temp;
	}
}
void print()
{
	struct node*p;
	p=head;
	while(p!=NULL)
	{
		printf("->%d ",p->data);
		p=p->next;
	}
}
void swap(int m,int n)
{
	int i,j;
	struct node*p,*q;
	p=q=head;
	for(i=0;i<m;i++)
	p=p->next;
	for(i=0;i<n;i++)
	q=q->next;
	j=p->data;
	p->data=q->data;
	q->data=j;
}
int main()
{
	int n,i,val,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&val);
		create(val);
	}
	sort();
	print();
	printf("\nenter the position where to swap\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	print();
	}
