#include<iostream>
using namespace std;
void Bubble(int a[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void Selection(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min=a[i];
		int index=i;
		for(int j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				index=j;
			}
		}
		int temp=a[i];
		a[i]=a[index];
		a[index]=temp;
	}
}

void Insertion(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j>0;j--)
		{
			if(a[j-1]>a[j])
			{
				int temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int a[20],n;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the number";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	Bubble(a,n);
//	Selection(a,n);
	Insertion(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
	
}
