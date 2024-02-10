#include<iostream>
using namespace std;
void Enqueue(int a[],int n,int item,int &front,int &rear)
{
	if(rear==n)
	{
		cout<<"overflow";
	}
	else if(front==-1&& rear==-1)
	{
		front=rear=0;
		a[rear]=item;
	}
	else
	{
		rear++;
		a[rear]=item;
	}
}
void Dequeue(int a[],int n,int &front,int &rear)
{
	if(front==-1)
	{
		cout<<"underflow";
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
}
int main()
{
	int a[20],n,item,front=-1,rear=-1,comm;
	cin>>n;
	do{
		cout<<"1.Enqueue\n2.Dequeue\nEnter the command";
		cin>>comm;
		switch(comm)
		{
			case 1:cout<<"enter the item";
					cin>>item;
					Enqueue(a,n,item,front,rear);
					break;
			case 2:Dequeue(a,n,front,rear);
					break;
			
			default:cout<<"Daffa ho";
					break;
			
		}
		cout<<"\n";
		for(int i=front;i<=rear;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}while(comm<3);
	
	
}
