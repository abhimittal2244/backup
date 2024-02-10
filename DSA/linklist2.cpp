#include<iostream>
using namespace std;

struct node
{
	int info;
	struct node *next;
};

struct node *start=NULL;

void Traverse()
{
	struct node *ptr=start;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<" ";
		ptr=ptr->next;
	}
		
}

void InsertAtBeg(int item)
{
	struct node *newNode=new node;
	newNode->info=item;
	newNode->next=start;
	start=newNode;
}

void InsertAtEnd(int item)
{
		struct node *newNode=new node;
		newNode->info=item;
		if(start==NULL)
		{
			newNode->next=start;
			start=newNode;
		}
		else
		{
			struct node *ptr=start;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			newNode->next=ptr->next;
			ptr->next=newNode;
		}
}

void InsertAfterNode(struct node* Target, int item)
{
	if(start== NULL)
	{
		cout<<"there is no node available!";
	}
	else
	{
		struct node* newNode = new node;
		newNode->info = item;
		newNode->next = Target->next;
		Target->next = newNode;
	}
}

int Search(int data)
{
	struct node *ptr = start;
	while(ptr != NULL)
	{
		if (ptr->info == data)
		{
			return 1;
		}
		ptr= ptr->next;
	}
	return 0;	
}

void DeleteAtBeg()
{
	start = start->next;
}

int DeleteAtEnd()
{
	struct node *ptr = start;
	struct node *pptr=ptr;
	while(ptr->next!=NULL)
	{
		pptr=ptr;
		ptr=ptr->next;
	}
	pptr->next=NULL;
	return ptr->info;
}

int DeleteAfterNode(struct node* Target)
{
	struct node* ptr = start;
	while(ptr->next != Target)
	{
		ptr = ptr->next;
	}
	ptr->next = Target->next;
	return Target->info;
}

void reverse()
{
	struct node* prev = NULL;
	struct node* curr = start;
	struct node* next;
	while(curr!=NULL)
	{
		next=curr->	next;
		curr->next = prev;
		prev = curr;
		curr=next;
	}
	start = prev;
}

int main()
{
	InsertAtBeg(23);
	InsertAtBeg(22);
	InsertAtBeg(12);
	InsertAtEnd(25);
	InsertAtEnd(26);
//	DeleteAtBeg();
//	cout << DeleteAtEnd()<<endl;
//	InsertAfterNode(start->next->next, 50);
//	cout << DeleteAfterNode(start->next)<<endl;
	Traverse();
	cout<<endl;
	reverse();
	Traverse();
}
