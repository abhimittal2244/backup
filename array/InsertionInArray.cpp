#include<iostream>
using namespace std;
int n;
void InsertBeg(int a[], int item)
{
	for(int i = n-1; i >=0; i--)
	{
		a[i+1] = a[i];
	}
	a[0] = item;
	n++;
}

void InsertEnd(int a[], int item)
{
	n++;
	a[n-1] = item;
}
void InsertPosition(int a[], int pos, int item)
{
	for(int i=n-1;i>=pos;i--)
	{
			a[i+1]=a[i];
	}
	a[pos]=item;
	n++;
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
    	int item;
		cout << "Enter an item: ";
		cin >> item;
    	switch(comm)
    	{
    		case 1:
    				InsertBeg(arr, item);
    				break;
    		case 2:
    				InsertEnd(arr, item);
    				break;
    		case 3:
    				int pos;
    				cout<<"Enter the position : ";
    				cin>>pos;
    				InsertPosition(arr, pos, item);
    				break;
    		default:
    				break;			
    	}
    	
    	cout << "\nOutput Array: ";
	    for(int i = 0; i < n; i++)
	    {
	    	cout << arr[i] << " ";
	    }
	    cout << "\n\n1. Insert At Beggining.\n2. Insert At End.\n3. Insert At Pos.\n4. Exit.\nEnter a command: ";
    	cin >> comm;
    }
    
    
    
    
    return 0;
}
