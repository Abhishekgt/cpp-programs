// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,i,a=1,b=1,c;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    if(n==1)
    {
    cout<<1<<",";
    }
    else
    {
    cout<<a<<",";
    cout<<b<<",";
    for(i=1;i<=n-2;i++)
    {
       c=a+b;
       cout<<c<<",";
       a=b;
       b=c;
    }
    }

    return 0;
}
