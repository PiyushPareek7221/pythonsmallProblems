#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head=NULL;
void create(int val){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else{
		struct node*p;
		p=head;
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
	}
}
void display()
{
	struct node*t;
	t=head;
	while(t!=NULL){
	 printf(" ->%d",t->data);
	 t=t->next;
	}
}
int main(){
	int n,x,j,y,k,pos,m;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&x);
		create(x);
	}
	display();
	printf("\nenter the node to insert at begin");
	scanf("%d",&y);
	struct node*l,*i,*o,*g;
	l=(struct node*)malloc(sizeof(struct node));
	l->data=y;
	l->next=NULL;
	l->next=head;
	head=l;
	display();
	printf("\n enter the mode to insert at rthe end");
	scanf("%d",&k);
	//k=(struct node*)malloc(sizeof(struct node));
	i=head;
	while(i->next!=NULL)
	i=i->next;
	i->data=k;
	i->next=NULL;
	display();
	/*printf("\n enter the node at a given position");
	scanf("%d%d",&pos,&m);
	q=(struct node*)malloc(sizeof(struct node));
	q->data=m;
	q->next=NULL;
	o=head;
	for(j=1;j<pos-1;j++)
		o=o->next;		
	q->next=o->next;
	o->next=q;
	display();
	*/
	printf("\nenter th poes where to delete");
	scanf("%d",&pos);
	o=g=head;
	for(j=1;j<pos-1;j++)
	{
		o=o->next;
	}	
	g=o->next;
	o->next=g->next;
	free(g);
	display();
	return 0;
}
