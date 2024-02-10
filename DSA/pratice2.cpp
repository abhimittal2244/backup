#include<iostream>
using namespace std;
int main()
{
	int n,a[10][10],sum;
	cout<<"enter the size: ";
	cin>>n;
	cout<<"enter the elements: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			sum=a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+1][j];
			cout<<sum<<"\t";
		}
	}
	
	
}
