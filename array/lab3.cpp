#include<iostream>
using namespace std;
void Insertion(int a[],int n)
{
	int item;
	for(int i=1;i<n;i++)
	{
		item=a[i];
		for(int j=i-1;j>=0;j--)
		{
			if(item<a[j])
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
			a[j+1]=item;
		}
	}
}
int main()
{
	int a[20],n;
	cout<<"enter the size";
	cin>>n;
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Insertion(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
