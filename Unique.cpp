// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int l,i,j,c=0,count=0;
    cout<<"Enter size of array"<<endl;
    cin>>l;
    int a[l];
    cout<<"Enter "<<l<<" numbers in sorted manner"<<endl;
    for(i=0;i<l;i++)
    {
    	cin>>a[i];
	}
	cout<<endl;
	cout<<"Unique numbers are: ";
	for(i=0;i<l;i++)
	{
		if(a[i]==-9999)
		{
			continue;
		}
		for(j=0;j<l;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					c=c+1;
					a[j]=-9999;
				}
			}
		}
		if(c==0)
		{
			cout<<a[i]<<", ";
		   count+=1;	
		}
		c=0;
	}
	cout<<endl;
	cout<<"Total number of unique numbers: "<<count<<endl;

    return 0;
}
