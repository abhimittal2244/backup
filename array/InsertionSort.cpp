#include<iostream>
using namespace std;
void InsertionSort(int a[],int n)
{
	int j;
	for(int i=1;i<n;i++)
	{
		int item=a[i];
		for( j=i-1;j>=0;j--)
		{
			if(item<a[j])
			{
				a[j+1]=a[j];	
			}	
			else
			{
				break;
			}	
		}
		a[j+1]=item;
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
	 
	 InsertionSort(arr,n);
	 
	for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
}
