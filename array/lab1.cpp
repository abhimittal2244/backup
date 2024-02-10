#include<iostream>
using namespace std;
void Selection(int a[],int n)
{
	int min;
	for(int i=1;i<n-1;i++)
	{
		min=a[i];
		int loc=i;
		for(int j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				loc=j;
			}
			 int temp=a[i];
			  a[i]=a[loc];
			  a[loc]=temp;
		}
	}
}
int main()
{
	int a[20],n;
	cout<<"enter the size";
	cin>>n;
	cout<<"enter the number of elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Selection(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
