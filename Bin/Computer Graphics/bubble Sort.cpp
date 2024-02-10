#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
}
int main()
{
	int arr[6]={8,9,10,6,4,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Array elements before sorting";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	bubblesort(arr,n);
	cout<<"Array element after sorting";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
		
	}
	
	return 0;
}
