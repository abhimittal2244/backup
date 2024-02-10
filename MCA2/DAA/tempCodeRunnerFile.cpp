#include<iostream>
#include <string>
using namespace std;
struct data{
    int ob;
    int pro;
    int w;
};

void sort(struct data a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j].w>a[j+1].w)
            {
                int temp=a[j].w;
                a[j].w=a[j+1].w;
                a[j+1].w=temp;

                temp=a[j].ob;
                a[j].ob=a[j+1].ob;
                a[j+1].ob=temp;

                temp=a[j].pro;
                a[j].pro=a[j+1].pro;
                a[j+1].pro=temp;
            }
        }
    }
}
int*, int  stwo(struct data a[],int n,int k)
{
    int i = 0,total=0, list[n];
    for(int i=0;i<n;i++)
    {
        list[i]=-1;
    }
    while(k!=0)
    {
        if(k>=a[i].w)
        {
            k-=a[i].w;
            list[i] = a[i].ob;
            total+=a[i].pro;
        }
        else{
            total+=(a[i].pro/a[i].w)*k;
            list[i]=a[i].ob;
            k=0;
        }
        i++;
    }
    // for(int i=0;i<n;i++)
    // {
    //     if(list[i] > 0)
    //         cout<<list[i]<<" ";
    // }
    // cout<<"\n"<<total;
    return list[], total;
}
int main()
{
    int n,k=15;
    cout<<"enter the size: ";
    cin>>n;
    struct data a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].ob>>a[i].pro>>a[i].w;
    }
    sort(a,n);
    int list*, total = stwo(a,n,k);
    for(int i=0;i<n;i++)
    {
        if(list[i] > 0)
            cout<<list[i]<<" ";
    }
    cout<<"\n"<<total;
}