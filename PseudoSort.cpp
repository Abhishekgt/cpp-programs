#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int sorting(int a[],int n)
// {
//     int p,t=0;
//     for(int i=0;i<n;i++)
//     {
//         p=i;
//         for(int j=i+1;j<n-1;j++)
//         {
//             if(a[j]<a[p])
//             p=j;
//         }
//         t=a[p];
//         a[p]=a[i];
//         a[i]=t;
//     }
//     return a;
// }
bool issorted(int a[],int n)
{
    if(n==1 || n==0)
    return true;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        return false;
    }
    return true;
}
int main() {
	// your code goes here
	int T,pp=0;
	cin>>T;
	for(int ii=0;ii<T;ii++)
	{
	    int n,t=0;
	    cin>>n;
	    int a[n];
	    //int b[n];
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        //b[i]=a[i];
	    }
	    
	   // sort(b,b+n);
	    
	    if(issorted(a,n))
	    cout<<"yes"<<endl;
	    else
	    {
	        for(int i=0;i<n;i++)
    	    {
    	        t=a[k];
    	        a[k]=a[k+1];
    	        a[k+1]=t;
    	       // for(int i=0;i<n;i++)
        	   // {
        	   //     cout<<a[i];
        	   // }
        	   // cout<<endl;
    	        if(issorted(a,n))
    	        {
    	            pp=1;
    	            break;
    	        }
    	        t=a[k];
    	        a[k]=a[k+1];
    	        a[k+1]=t;
    	        k=k+1;
    	    }
    	    if(pp==1)
    	    cout<<"yes"<<endl;
    	    else
    	    cout<<"no"<<endl;
	    }
	    pp=0;
	}
	return 0;
}
