// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int l,i,c=0;
    cout<<"Enter size of array"<<endl;
    cin>>l;
    int a[l+1];
    cout<<"Enter "<<l<<" numbers in sorted manner"<<endl;
    for(i=0;i<l;i++)
    {
    	cin>>a[i];
	}
	a[l]=-9999;
	for(i=0;i<l;i++)
	{
		if(a[i]==a[i+1])
		{
			c=c+1;
		}
		else if(a[i]!=a[i+1])
		{
			c=c+1;
			cout<<a[i]<<" occures "<<c<<" times"<<endl;
			c=0;
			if(i==l){
				break;
			}
		}
	}

    return 0;
}
