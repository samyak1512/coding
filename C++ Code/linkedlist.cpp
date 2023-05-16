#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;

}*first,*last;

void insert_last(int x)
{
	struct node *t = new node;

	t->data = x;
	t->next = 0;
	
	if (first == 0)
	{
		first = t;
		last = t;
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
		cout<<endl;
	}
}

int main()
{
	insert_last(5);
	insert_last(10);
	insert_last(15);
	insert_last(20);
	display(first);
}