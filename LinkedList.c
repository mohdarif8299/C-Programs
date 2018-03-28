#include<stdio.h>
#include<stdlib.h>
int main() {
	struct node {
		int data;
		struct node *next;
	};
	struct node a = {10,NULL};
	struct node b = {20,NULL};
	struct node c = {30,NULL};
	struct node d = {40,NULL};
	struct node *s;
	s=&a;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	int item = 50;
	printf("After insertion\n");
	struct node *n;
	n->data=item;
	n->next= s;
	s=n;
	while(s!=NULL)
	{
		printf("%d\t",s->data);
		s = s->next;
	}	
	return 0;
}
