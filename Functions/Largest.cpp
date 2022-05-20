#include<iostream>
using namespace std;
int largest(int a[],int l)
{
	int i,max=a[0];
	for(i=0;i<l;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	cout<<"Original Array: "<<endl;
	for(i=0;i<l;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Largest Element: "<<max;
}
int main()
{
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the value at a["<<i<<"]: ";
		cin>>a[i];
	}
	
	largest(a,n);
	
}
