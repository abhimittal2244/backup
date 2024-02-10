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
	 		int temp=a[pivot];
	 		a[pivot]=a[right];
	 		a[right]=temp;
	 		pivot=right;
	 	}
	 	while(a[left]<=a[pivot] && left!=pivot)
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
void StackSort(int a[], int beg,int end)
{
	int lower_b[20], upper_b[20],loc;
	int top=-1;
	if(top==-1)
	{
		top=top+1;
		lower_b[top]=beg;
		upper_b[top]=end;
		
	}
	while (top!=-1)
	{
		
		beg = lower_b[top];
		end=upper_b[top];
		top=top-1;
		int loc=QuickSort(a,beg,end);

		if(beg<loc-1)
		{
			top++;
			lower_b[top]=beg;
			upper_b[top]=loc-1;
		}
		if(end>loc+1)
		{
			top++;
			lower_b[top]=loc+1;
			upper_b[top]=end;
		}
	}
}

int main()
{
	int n,a[20];
	cout<<"Enter the  number of elements: ";
	cin>> n;
	for(int i=0;i<n;i++)
	{
		cin>> a[i];
	}
	QuickSort(a,0, n-1);
	StackSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<< a[i] << " ";
	}
}
