// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,m,i,j;
    cout<<"Enter no of rows"<<endl;
    cin>>n;
    cout<<"Enter no of columns"<<endl;
    cin>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		cout<<"Enter a no at a["<<i<<"]"<<"["<<j<<"]"<<endl;
    		cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Even numbers from the Array:"<<endl;
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		if(a[i][j]%2==0)
    		cout<<a[i][j]<<", ";
		}
	}
    return 0;
}
