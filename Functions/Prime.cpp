#include<iostream>
using namespace std;
int a;
int isprime()
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		c++;
	}
	if(c==2)
	{
		cout<<a<<" is prime";
	}
	else
	cout<<a<<" is not prime";
}
int main()
{
	cout<<"Enter the number: "<<endl;
	cin>>a;
	isprime();
	
}
