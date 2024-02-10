#include<stdio.h>
// Create Structure for each process
struct process
{
int AT,WT,TT,BT;
};

struct process a[10]; // array of 10 processess
int main()
{
// Declare variable and take arrival time and burst time as input
int n, i;
int burst=0,cmpl_T;
float Avg_WT,Avg_TT,Total=0;
printf("Enter number of process\n");
scanf("%d",&n);
printf("Enter Arrival time and Burst time of the process\n");
printf("At BT\n");
for(i=0;i<n;i++)
{
scanf("%d%d",&a[i].AT,&a[i].BT);

}

// Logic for calculating Waiting time
for(i=0;i<n;i++)
{
if(i==0)
a[i].WT=a[i].AT;
else
a[i].WT=burst-a[i].AT;
burst+=a[i].BT;
Total+=a[i].WT;
}
Avg_WT=Total/n;
// Logic for calculating Turn around time
cmpl_T=0;
Total=0;
for(i=0;i<n;i++)
{
cmpl_T+=a[i].BT;
a[i].TT=cmpl_T-a[i].AT;
Total+=a[i].TT;
}
Avg_TT=Total/n;
// printing of outputs
printf("Process , Waiting_time , TurnA_time\n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\t\t%d\n",i+1,a[i].WT,a[i].TT);
}
printf("Average waiting time is : %f\n",Avg_WT);
printf("Average turn around time is : %f\n",Avg_TT);
return 0;
}
