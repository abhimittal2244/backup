#include<iostream>
using namespace std;
int  Queue[50], N, F=-1, R=-1;

void Dequeue(int Queue[])
{
	if(F==-1 && R==-1)
	{
		cout << "Underflow";
	}
	else if(F==R)
	{
		F=-1;
		R=-1;
	}
	else
	{
		F++;
	}
}
void Enqueue(int Queue[], int item)
{
	if(R==N-1)
	{
		cout<< "Overflow";
	}
	else if(F==-1 && R==-1)
	{
		F = F + 1; // F=R=0
		R = R + 1;
		Queue[R] = item;
	}
	else
	{
		R++;
		Queue[R] = item;	
	}
}

int main()
{
	int comm, item;
	cout << "Enter the length: ";
	cin >> N;
	
	cout << "\n1. Insert into Queue.\n2. Delete from the Queue.\n3. Exit.";
	
	cout << "\nEnter a command: ";
	cin >> comm;
	
	while(comm < 3)
	{
		switch(comm)
		{
			case 1:
					cout << "Enter an item: ";
					cin >> item;
					Enqueue(Queue, item);
					break;
			case 2: 
					Dequeue(Queue);
					break;
			default:
					break;
		}
		
		
		for(int i=F;i<=R;i++)
		{
			cout<<Queue[i]<<"\t";
			
		}
		
		
		cout << "\n\n1. Insert into Queue.\n2. Delete from the Queue.\n3. Exit.";
		cout << "\nEnter a command: ";
		cin >> comm;
		
		
	}
	
	
	return 0;
}
