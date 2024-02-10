#include<iostream>
using namespace std;

void Smallest(int arr[], int n)
{
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<< "\nSmallest element is: " << min;
	
}

void Greatest(int arr[],int n)
{
	int max;
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"\nGreatest of number is: "<<max;
}

int main()
{
    int N, arr[10];
    
    cout << "Enter the length of an array: " << std::endl;
    cin >> N;
   
    cout << "Enter the elements of array: " << std::endl;
    for(int i = 0; i< N; i++)
    {
        cin >> arr[i];
    }
  
    cout << "\nInput Array: ";
    for(int i = 0; i < N; i++)
    {
    	cout << arr[i] << " ";
    }
    cout << "\n";
    Smallest(arr, N);
    Greatest(arr, N);
    return 0;
}
