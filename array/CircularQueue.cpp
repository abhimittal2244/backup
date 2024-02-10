#include<iostream>
using namespace std;
int F = -1, R = -1;

void CircularEnqueue(int a[], int n, int item)
{
	if((R+1)%n == F)
	{
		cout << "Overflow!!!";
	}
	else if(F==-1 && R==-1)
	{
		F = 0;
		R = 0;
		a[R] = item;
	}
	else
	{
		R = (R +1)%n;
		a[R] = item;
	}
}

void CircularDequeue(int a[], int n)
{
	if(F==-1 && R == -1)
	{
		cout << "underflow";
	}
	else if(F == R)
	{
		F = -1;
		R = -1;
	}
	else
	{
		F = (F + 1)%n;
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
					CircularEnqueue(a, n, item);
					break;
					
			case 2:
					CircularDequeue(a, n);
					break;
			default:
					break;
		}
		cout << "\n";
		for(int i = F; i <= R; i++)
		{
			cout << a[i] << "\t";
		}
		
		cout << "\n1. Push an Element.\n2. Pop and element.\n3. Exit.\nEnter a command: ";
		cin >> comm;
	}
	
}
