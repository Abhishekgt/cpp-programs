// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[5],i,s,n,pos;
    cout<<"Enter five elements in an array"<<endl;
    for (i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the POSITION from where the element will be deleted"<<endl;
    cin>>pos;
    cout<<"Original Array"<<endl;
    for (i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (i=pos;i<4;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"New Array"<<endl;
    for (i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
