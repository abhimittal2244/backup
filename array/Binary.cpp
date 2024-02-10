#include<iostream>
using namespace std;
void Binary(int a[],int beg,int end,int item)
{
	while(beg<=end)
	{
		int mid=(beg+end)/2;
		if(a[mid]==item)
		{
			cout<<"item found "<<mid;
			return ;
		}
		else if(item>a[mid])
		{
			  beg=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	cout<<"item not found";
}
int main()
{
	int a[20],n,i,item;
	cout<<"enter the size";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the item";
	cin>>item;
	Binary(a,0,n,item);
	
}
