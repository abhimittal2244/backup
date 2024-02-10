#include<iostream>
using namespace std;
struct data{
    int start;
    int profit;
    int deadline;
};
void sort(struct data a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1].profit>a[j].profit)
            {
                int temp=a[j+1].profit;
                a[j+1].profit=a[j].profit;
                a[j].profit=temp;

                temp=a[j+1].start;
                a[j+1].start=a[j].start;
                a[j].start=temp;

                 temp=a[j+1].deadline;
                a[j+1].deadline=a[j].deadline;
                a[j].deadline=temp;

            }
        }
    }
}
int main()
{
    int n, total=0;
    cout<<"enter the numbers ";
    cin>>n;
    struct data a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].start>>a[i].profit>>a[i].deadline;
    }
    sort(a,n);
    int sol[4];
    for(int i=0;i<n;i++)
    {
        sol[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=a[i].deadline-1;j>=0;j--)
        {
            if(sol[j]<=0)
            {
                sol[j]=a[i].start;
                total += a[i].profit;
                break;
            }
        } 
    }
    for(int i=0;i<4;i++)
    {
        if(sol[i]>=0)
        {
            cout<<sol[i]<<" ";
        }
    }
    cout << "\nTotal profit: "<<total;
    return 0;
}