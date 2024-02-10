#include<iostream>
using namespace std;
int  Queue[50], N, F=-1, R=-1;

void Enqueue(int Queue[], int item)
{
	if(R==N)
	{
		cout<< "Overflow";
	}
	else if(F==-1 && R==-1)
	{
		F = F + 1;
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
	int comm;
	cout << "Enter the length: ";
	cin >> N;
	
	cout << "\nEnter a command: ";
	cin >> comm;
	
//	cout << "\nEnter an item: ";
//	cin >> item;
	
	while(comm != 4)
	{
		
		Enqueue(Queue, 24);
		for(int i=0;i<=R;i++)
		{
			cout<<Queue[i]<<"\t";
			
		}
		
		cout << "\nEnter a command: ";
		cin >> comm;
		
//		cout << "Enter an item: ";
//		cin >> item;
	}
	
	
	return 0;
}
