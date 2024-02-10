#include<iostream>
using namespace std;
void InsertionAtBeg(int a[],int &n,int item)
{
	for(int i=n;i>=0;i--)
	{ 	
		a[i+1]=a[i];
	}
	a[0] = item;
	n++;
}
void InsertionAtLoc(int a[],int &n, int item)
{
	int pos;
	cout<<"enter the position: ";
	cin>>pos;
	for(int i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=item;
	n++;
}
void InsertionAtEnd(int a[],int &n,int item)
{
	a[n]=item;
	n++;
}
void DeletionAtBeg(int a[],int &n)
{
	for(int i=1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	n--;
}
void DeletionAtPos(int a[],int &n)
{
	int loc;
	cout<<"enter the position";
	cin>>loc;
	for(int i=loc;i<n;i++)
	{
		a[i-1]=a[i];
	}
	n--;
}
void DeletionAtEnd(int a[],int &n)
{
	n--;
}
int main()
{
	int a[20],n,item,comm;
	cout<<"enter the size: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	do{
		cout<<"1.Insert At Beg\n2.Insert At Loc\n3.Insert At End\n4.Deletion At Beg\n5.Deletion At Pos\n6.Deletion At End\nEnter the Command";
		cin>>comm;
		switch(comm)
		{
			case 1:cout<<"enter the item: ";
					cin>>item;
					InsertionAtBeg(a,n,item);
					break;
					
			case 2:cout<<"enter the item: ";
					cin>>item;
					InsertionAtLoc(a,n,item);
					break;
			
			case 3:cout<<"enter the item: ";
					cin>>item;
					InsertionAtEnd(a,n,item);
					break;
					
			case 4:DeletionAtBeg(a,n);
					break;
					
			case 5:DeletionAtPos(a,n);
					break;
					
			case 6:	DeletionAtEnd(a,n);
					break;
					
			default:cout<<"Daffa ho";
					break;
					
					
		}
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";		
	}while(comm<6);
}
