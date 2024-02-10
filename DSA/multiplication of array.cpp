#include<iostream>
using namespace std;
int main()
{
	int n,a[10][10] ,b[10][10];
	cout<<"enter the size: ";
	cin>>n;
	cout<<"enter the value for first matrix: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the value for second matrix: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=a[i][j]*b[j][k];
			}
			cout<<sum<<"\t";
		}		
	}
}
