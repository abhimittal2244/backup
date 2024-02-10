#include<iostream>
using namespace std;
struct Occur{
	int no;
	int flag;
	int count;
};
int main()
{
	int n=10;
	struct Occur arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].no;
		arr[i].flag=0;
		arr[i].count=0;
	}
	for(int i=0;i<n;i++)
	{
		int count=0;
		if(arr[i].flag==0)
		{
			for(int j=i;j<n;j++)
			{
				if(arr[j].flag==0)
				{
					if(arr[i].no==arr[j].no)
					{
						count++;
						arr[j].flag=1;	
					}
				}
			}
		}
		arr[i].count=count;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i].count>0)
		{
			cout<<arr[i].no<<"\t"<<arr[i].count<<endl;
		}
	}
	return 0;
}
