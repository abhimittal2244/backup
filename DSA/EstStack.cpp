#include<iostream>
using namespace std;
int top=-1, n=5;

void push(int stack[], int item)
{
	if(top==n-1)
	{
		cout<<"Stack overflow!";
	}	
	else
	{
		top++;
		stack[top]=item;
	}
}

int pop(int stack[])
{
	if(top==-1)
	{
		cout<<"stack underflow!";
		return -1;
	}
	else
	{
		return stack[top--];
	}
}


int main()
{
	int stack[n], ch;
	do
	{
		int item;
		cout<<"\n1. Push an element.\n2. Pop an element.\n3. Exit\nEnter a command: ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nEnter an element: ";
					cin>>item;
					push(stack, item);
					break;
			case 2: item = pop(stack);
					cout << "\nDeleted item is: "<< item;
					break;
			case 3: break;
			default:break;
		}
		cout << endl;
		for(int i = 0; i <=top; i++)
		{
			cout << stack[i] << " ";
		}
		cout << endl;
	}while(ch!=3);
	
}
