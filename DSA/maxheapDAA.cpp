#include<iostream>
using namespace std;
void siftdown(int v[],int i,int n)
{
	int temp=v[i];
	while(2*i+1<n)
	{
		int child=2*i+1;	
		if(child<n-1 && v[child+1]>v[child])
		{
			child=child+1;
		}
		if(v[child]>temp)
		{
			v[i]=v[child];
		}
		else
		{
			break;
		}
		i=child;	
	}
	v[i]=temp;
}
int main()
{
	int n;
	cout<<"enter the numbers: ";
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
	{
		cin>> v[i];
	}
	for(int i=n/2;i>=0;i--)
	{
		siftdown(v,i,n);
	}
	for(int i=0;i<n;i++)
	{
		int temp=v[0];
		v[0]=v[n-1-i];
		v[n-1-i]=temp;
		siftdown(v,0,n);
	}
	for(int i=0;i<n;i++)
	{
		cout<< v[i]<<" ";
	}
}
