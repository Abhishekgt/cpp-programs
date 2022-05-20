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
    int a[n][m],max,min;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		cout<<"Enter a no at a["<<i<<"]"<<"["<<j<<"]"<<endl;
    		cin>>a[i][j];
		}
	}
	max=a[0][0];
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		if(a[i][j]>max)
    		max=a[i][j];
		}
	}
	cout<<"Original Array: "<<endl;
	for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Largest Element: "<<max<<endl;
	

    return 0;
}
