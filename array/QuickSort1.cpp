#include<iostream>
using namespace std;
int QuickSort(int a[],int beg,int end)
{
	int left=beg;
	int right=end;
	int pivot=left;
	while(true)
	{
		while(a[pivot]<=a[right] && pivot!=right)
		{
			right--;
		}
		if(a[pivot]>a[right])
		{
			int temp=a[pivot];
			a[pivot]=a[right];
			a[right]=temp;
			pivot=right;
		}
		while(a[pivot]>=a[left] && pivot!=left)
		{
			left++;
		}
		if(a[pivot]<a[left])
		{
			int temp=a[pivot];
			a[pivot]=a[left];
			a[left]=temp;
			pivot=left;
		}
		if(left>=right)
		{
			break;
		}
	}
	return pivot;	
}

void QuickSortStack(int a[], int beg, int end)
{
	int Lower[20], Upper[20], Top=-1, pivot_loc;
	if(Top==-1)
	{
		Top++;
		Lower[Top] = beg;
		Upper[Top] = end;
	}
	while(Top != -1)
	{
		beg = Lower[Top];
		end = Upper[Top];
		Top--;
		pivot_loc = QuickSort(a, beg, end);
		if(beg < pivot_loc-1)
		{
			Top++;
			Lower[Top] = beg;
			Upper[Top] = pivot_loc-1;
		}
		if(end > pivot_loc+1)
		{
			Top++;
			Lower[Top] = pivot_loc+1;
			Upper[Top] = end;
		}
	}
}

int main()
{
	int arr[20],n;
	cout<<"enter number of elements";
	cin>>n;
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	QuickSortStack(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
