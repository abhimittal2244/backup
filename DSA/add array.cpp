#include<iostream>
using namespace std;
int main()
{
	int a[10],n,temp;
	cout<<"enter the numbers: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp%2==0)
		{
			a[i]= 1;
		}
		else
		{
			a[i]= 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
