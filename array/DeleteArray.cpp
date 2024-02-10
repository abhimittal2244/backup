#include<iostream>
using namespace std;
int n;

void DeleteBeg(int a[])
{
	for(int i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	
}
void DeleteEnd(int a[])
{
	n--;
}
void DeletePos(int a[],int pos)
{
	for(int i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}


int main()
{
    int arr[10], pos;
    
    cout << "Enter the length of an array: " << endl;
    cin >> n;
   
    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    
  
    cout << "\nInput Array: ";
    for(int i = 0; i < n; i++)
    {
    	cout << arr[i] << " ";
    }
    int comm;
    cout << "\n1. Insert At Beggining.\n2. Insert At End.\n3. Insert At Pos.\n4. Exit.\nEnter a command: ";
    cin >> comm;
    while(comm < 4)
    {
    	switch(comm)
    	{
    		case 1:
    				DeleteBeg(arr);
    				break;
    		case 2:
    				DeleteEnd(arr);
    				break;
    		case 3:
    				int pos;
    				cout<<"Enter the position : ";
    				cin>>pos;
    				DeletePos(arr, pos);
    				break;
    		default:
    				break;			
    	}
    	
    	cout << "\nOutput Array: ";
	    for(int i = 0; i < n; i++)
	    {
	    	cout << arr[i] << " ";
	    }
	    cout << "\n\n1. Delete At Beggining.\n2. Delete At End.\n3. Delete At Pos.\n4. Exit.\nEnter a command: ";
    	cin >> comm;
    }
    
    
    
    
    return 0;
}
