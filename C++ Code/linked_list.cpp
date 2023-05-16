#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;

}*first;

void insert_last(int x)
{
	struct node *t = new node;
	struct node *last = new node;
	t->data = x;
	t->next = 0;
	
	if (first == 0)
	{
		first = last = t;
	}

	else
	{
		last->next=t;
		last = t;
	}


}

void display(struct node *p)
{
	while(p!=0)
	{
		cout<<(p->data);
		p=p->next;
	}
}