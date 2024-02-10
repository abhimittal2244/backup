#include<iostream>
using namespace std;

struct node
{
	int info;
	struct node *next;
};
struct node *start= NULL;

void Traversal()
{
	struct node *ptr = start;
	while(ptr != NULL)
	{
		cout<<ptr->info<<" ";
		ptr=ptr->next;
	}
}

void InsertionAtEnd(int item)
{
	struct node *newnode=new node;
	newnode->info = item;
	if(start == NULL)
	{
		start = newnode;
		newnode->next = NULL;
	}
	else
	{
		struct node *ptr = start;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newnode;
		newnode->next = NULL;
	}	
}

void InsertionAtBeg(int item)
{
	struct node *newnode=new node;
	newnode->info=item;
	newnode->next=start;
	start=newnode;
}
/*
void InsertionAtK(struct node pptr,int item)
{
	struct node ptr=start;
	struct node pptr=ptr;
	while(item<ptr->info && ptr!=NULL)
	{
		
	}
}*/
int main()
{
	InsertionAtEnd(23);
	InsertionAtEnd(24);
	InsertionAtEnd(21);
	InsertionAtEnd(25);
	InsertionAtBeg(20);
	Traversal();
}
