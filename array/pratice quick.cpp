#include<iostream>
using namespace std;
int QuickSort(int a[],int beg,int end)
{
	 int left=beg;
	 int right=end;
	 int pivot=left;
	 while(true)
	 {
	 	while (a[right]>=a[pivot] && right!=pivot)
	 	{
	 		right--;
	 	}
	 	if(a[pivot]>a[right])
	 	{
	 		int temp=a[right];
	 		a[pivot]=a[right];
	 		a[pivot]=temp;
	 		pivot=right;
	 	}
	 	while(a[left]<=a[pivot] && left!=pivot)
	 	{
	 		left++;
	 	}
	 	if(a[pivot]<a[left])
	 	{
	 		int temp=a[left];
	 		a[left]=a[pivot];
	 		a[pivot]=temp;
	 		pivot=left;
	 	}
	 	if(left>=right)
	 	{
	 		break;
	 	}
	 }
	
}
int main()
{
	int n,a[20],beg, end;
	cout<<"enter the  number of elements";
	cin>> n;
	for(int i=0;i<n;i++)
	{
		cin>> a[i];
	}
	QuickSort(a,beg,end);
	for(int i=0;i<n;i++)
	{
		cout<< a[i];
	}
}
