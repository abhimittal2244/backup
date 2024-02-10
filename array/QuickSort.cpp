#include<iostream>
using namespace std;

int Pivot(int arr[], int beg, int end)
{
	int left = beg, right = end, loc = beg;
	while(true)
	{
		while((arr[right] >= arr[loc]) && loc!=right)
		{
			right--;
			
		}
		if(arr[right] < arr[loc])
		{
			int temp = arr[right];
			arr[right] = arr[loc];
			arr[loc] = temp;
			loc = right;
		}
	
		while((arr[left] < arr[loc]) && loc!=left)
		{
			left++;
			
		}
		if(arr[left] > arr[loc])
		{
			int temp = arr[left];
			arr[left] = arr[loc];
			arr[loc] = temp;
			loc = left;
		}
		
		if(left>=right)
		{
			break;
		}	
	}
	return loc;
}

void QuickSort(int arr[], int beg, int end)
{
	int top = -1, upper[10], lower[10], loc;
	if(top = -1)
    {
    	top++;
    	lower[top] = beg;
    	upper[top] = end;
    }
    while(top != -1)
    {
    	beg = lower[top];
    	end = upper[top];
    	top--;
    	
		loc = Pivot(arr, beg, end);
    	
    	if(beg < loc-1)
    	{
    		top++;
    		lower[top] = beg;
    		upper[top] = loc - 1;
    	}
    	if(end > loc+1)
    	{
    		top++;
    		lower[top] = loc + 1;
    		upper[top] = end;
    	}
    }
	
}

int main()
{
    int N, arr[10];
    
    cout << "Enter the length of an array: " << std::endl;
    cin >> N;
   
    cout << "Enter the elements of array1: " << std::endl;
    for(int i = 0; i< N; i++)
    {
        cin >> arr[i];
    }
  
    cout << "\nInput Array: ";
    for(int i = 0; i < N; i++)
    {
    	cout << arr[i] << " ";
    }
    
    QuickSort(arr, 0, N-1);
    std::cout << "\nOutput Array: ";
    for(int i = 0; i < N; i++)
    {
    	cout << arr[i] << " ";
    }
    return 0;
}
