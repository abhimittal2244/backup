#include<iostream>
using namespace std;
int Linear(int a[],int n, int item)
{
	for(int i=0;i<n;i++)
	{
		if(item==a[i])
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,a[20],item;
	cout<<"enter the size";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the item";
	cin>>item;
	int loc=Linear(a,n,item);
	if(loc==-1)
	{
		cout<<"item not found";
	}
	else
	{
		cout<<"item found : "<<loc;
	}
}
