#include<iostream>
using namespace std;
int main()
{
	int n,a[10],b[10],c[10];
	cout<<"enter number of elements: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		cout<<a[i]<<endl;
		cout<<b[i]<<endl;
		cout<<c[i]<<endl;	
	}
	
	
}
