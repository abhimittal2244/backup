#include<iostream>
using namespace std;
int top=-1;
void Push(int a[],int n,int item)
{
	if(top==n-1)
	{
		cout<<"overflow";
	}
	else
	{
		top=top+1;
		a[top]=item;	
	}
}
void Pop(int a[])
{
	if(top==-1)
	{
		cout<<"underflow";
		
	}
	else
	{
		top--;
	}
}
int  main()
{
	int n,a[20],item, comm;
	cout<<"enter the size: ";
	cin>>n;
	
	cout << "\n1. Push an Element.\n2. Pop and element.\n3. Exit.\nEnter a command: ";
	cin >> comm;
	
	while(comm < 3)
	{
		switch(comm)
		{
			case 1:
					cout << "Enter an item: ";
					cin >> item;
					Push(a, n, item);
					break;
					
			case 2:
					Pop(a);
					break;
			default:
					break;
		}
		cout << "\n";
		for(int i = 0; i <= top; i++)
		{
			cout << a[i] << "\t";
		}
		
		cout << "\n1. Push an Element.\n2. Pop and element.\n3. Exit.\nEnter a command: ";
		cin >> comm;
	}
	
}






