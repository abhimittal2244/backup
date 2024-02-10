#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
	for(int i = 0; i<n-1; i++)
	{
		for(int j = 0; j < n-i; j++)
		if(arr[j]>arr[j+1])
		{
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}

void RBubbleSort(int arr[], int n)
{
	if(n==0)
	{
		return;
	}
	for(int j = 0; j<n-1; j++)
	{
		if(arr[j]>arr[j+1])
		{
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
	RBubbleSort(arr, n-1);
}

int main()
{
	int a[5] = {5, 3, 6, 2, 1};
	RBubbleSort(a, 5);
	for(int i = 0; i<5; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
