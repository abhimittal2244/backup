#include<iostream>
using namespace std;
int Queue[30], n,F=-1,R=-1;
void Enqueue(int Queue[],int item)
{
	if(R==-1)
	{
		cout<<" OVERFLOW ";
	}
	else if(F==-1 && R==-1)
	{
		F=R=0;
		Queue[R]=item;
	}
	else
	{
		R=R+1;
		Queue[R]=item;
	}
}
void Dequeue(int Queue[])
{
	if(F==-1 && R==-1)
	{
		cout<<"Unberflow";
	}	
	else if(F==R)
	{
		F=-1;
		R=-1;
	}
	else
	{
		F=F+1;
	}
}
void Peek(int Queue[])
{
	if(F==-1 && R==-1)
	{
		cout<<"UNDERFLOW";
	}
	else
	{
		cout<< Queue[F];
	}
}	

int main()
{
	int comm,item;
	cout<<"enter the size";
	cin>>n;
	cout<<"\n 1. Insertion . \n 2.Deletion . \n 3. Peek . \n 4. exit .";
	cout<<" \n Enter the command ";
	cin>>comm;
	while(comm>4)
	{
		switch(comm)
		{
			case 1:
				cout<<"Enter the item ";
				cin>> item;
				Enqueue(Queue,item);
			break;
			case 2:
				Dequeue(Queue);
			break;
			case 3:
				Peek(Queue);
				break;
			default:
					break;
				   
		}
		for(int i=F;i<=R;i++)
		{
			cout<<Queue[i]<<"\t";
			
		}
	
		cout << "\n\n1. Insert into Queue.\n2. Delete from the Queue.\n3. Peek \n 4. exit";
		cout << "\nEnter a command: ";
		cin >> comm;	
	}
	return 0;
	
}
