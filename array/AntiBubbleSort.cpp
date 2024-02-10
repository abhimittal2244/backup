#include<iostream>
using namespace std;
void AntiBubbleSort(int a[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>0+i;j--)
		{
			if (a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
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
	 
	 AntiBubbleSort(arr,n);
	 
	for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
}





