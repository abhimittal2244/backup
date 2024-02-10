#include<iostream>
using namespace std;
void Traversal(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void Insertionatbeg(int a[],int n,int item)
{
	for(int i=0;i<n;i++)
	{
		for(int i=n;i>0;i--)
		{
			a[i+1]=a[i];
		}
	}
	n++;
	
}
int main()
{
	int a[10], n,item;
	cin>>n;
	cout<<"enter the item";
	cin>>item;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Traversal(a,n);
	Insertionatbeg(a,n,item);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
