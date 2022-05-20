// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int l,i,min,min2;
    cout<<"Enter size of array"<<endl;
    cin>>l;
    int a[l];
    cout<<"Enter "<<l<< " numbers"<<endl;
    for(i=0;i<l;i++)
    {
    	cin>>a[i];
	}
	min=a[0];
	for(i=0;i<l;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]!=min){
			min2=a[i];
			break;
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]<min2 && a[i]!=min)
		{
			min2=a[i];
		}
	}
	cout<<"Second smallest: "<<min2;

    return 0;
}
