#include<iostream>
using namespace std;

void SelectionSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
	    int min=a[i];
		int loc=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		int temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
}

int main()
{
	int arr[30],n;
	cout<<"enter the size of  array";
	cin>> n;
	cout<<"enter the elements";
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 
	 SelectionSort(arr,n);
	 
	for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
}
