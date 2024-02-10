#include<iostream>
using namespace std;
void Factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	cout<<"the factorial of number is : " << fact<<"\n";
	
}
/*void Fibbonacci(int n)
{
 int a=0;
 int b=1;
 cout<< a <<" "<<b;
 for(int i=3;i<=n;i++)
 {
 	int c=a+b;
 	cout<<" "<<c;
 	a=b;
 	b=c;
 }
 
 
}*/
void Fibbonacci(int n)
{
	int a,b,c;
	a=0;
	b=1;
	if(n>=1)
	{
		cout<<a<<" ";
	}
	if(n>=2)
	{
		cout<<b;
	}
	if(n>=3)
	{
		for(int i=3;i<=n;i++)
		{
			int c=a+b;
			cout<<" "<<c;
			a=b;
			b=c;
		}
	}
}
int main()
{
	int n ;
	cout<< "Enter the number";
	cin >> n;
	Factorial(n);
	Fibbonacci(n);
}

