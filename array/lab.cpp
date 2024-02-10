#include<iostream>
using namespace std;
void Bubble(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
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
int main()
{
	int arr[20],n;
	cout<<"enter the size";
	cin>>n;
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Bubble(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
