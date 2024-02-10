#include<iostream>
using namespace std;

void Even(int arr[], int N)
{
	cout << "\nEven no: ";
	for(int i = 0; i < N; i++)
	{
		
		if(arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
}

void Odd(int arr[], int N)
{
	cout << "\nOdd no: ";
	for(int i = 0; i < N; i++)
	{
		
		if(arr[i] % 2 != 0)
		{
			cout << arr[i] << " ";
		}
	}
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
    Even(arr, N);
    Odd(arr, N);
    return 0;
}
