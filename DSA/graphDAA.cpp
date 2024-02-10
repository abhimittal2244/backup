#include<iostream>
using namespace std;
void graph(int n,int d_flag)
{
	int a[n][n],ed,status[n];
	for(int i=1;i<=n;i++)
	{
		status[i]=1;
		for(int j=1;j<=n;j++)
		{
			a[i][j]=0;
		}
	}
	cout<<"enter number of edges ";
	cin>>ed;
	for(int i=1;i<=ed;i++)
	{
		int sv,ev;
		cout<<"enter start vertex ";
		cin>>sv;
		cout<<"enter end vertex ";
		cin>>ev;
		a[sv][ev]=1;
		if(d_flag==0)
		{
			a[ev][sv]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			
			cout<<a[i][j];
		}
		cout<<endl;
	}
	int q[20],f=0,r=0,v;
	cout<<"enter starting vertex ";
	cin>>q[++r];
	f++;
	while(f<=r)
	{
		v=q[f++];
		cout<<v<<endl;
		 status[v]=3;
	
		for(int j=1;j<=n;j++)
		{
			if(a[v][j]!=0 && status[j]==1)
			{
				q[++r]=j;
				status[j]=2;
			}
			
		
		}
	}
}
int main()
{
	int n;
	cout<<"enter the number ";
	cin>>n;
	graph(n,0);
}
