#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i;
        while(j>=0&&arr[j-1]>temp)
        {
        	j--;
            arr[j+1]=arr[j];
        }
        arr[j]=temp;
        
    }
}
int main()
{
   
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[50];    //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<"\t";
   }
   insertionsort(arr, n);
   cout << "Array after Sorting: ";
   
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<"\t";
   }

    return 0;
}
