#include<iostream>
using namespace std;
void Push(int a[],int n,int item,int &top)
{
	if(top==n)
	{
		cout<<"overflow";
	}
	else
	{
		top++;
		a[top]=item;
	}
}
void Pop(int a[],int n,int &top)
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
int main()
{ 
	int a[20],n,comm,item,top=-1;
	cout<<"enter the size";
	cin>>n;
	do{
		cout<<"1.Push\n2.Pop\nEnter the Command: ";
		cin>>comm;
		switch (comm)
		{
			case 1: cout<<"enter the item: ";
					cin>>item;
					Push(a,n,item,top);
					break;
					
			case 2: Pop(a,n,top);
					break;
				
			default: cout<<"Daffa ho";
					break;
		}
		cout<<"\n";
		for(int i=0;i<=top;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	while(comm<3);
	
	
}
