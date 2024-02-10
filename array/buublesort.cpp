#include<iostream>
using namespace std;
int main()
{
	int arr[5],n,temp;
	cout<<"enter size of an array";
	cin >> n;
	cout<<"enter number of elements";
	for(int i=0;i<n;i++)
	{
		cin>> arr[i];
		
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
	cout<<"Sorted array is ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
}
