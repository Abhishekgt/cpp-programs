// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[6],i,s,n,pos;
    cout<<"Enter five elements in an array"<<endl;
    for (i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the ELEMENT to be inserted"<<endl;
    cin>>n;
    cout<<"Enter the POSITION where the element will be inserted"<<endl;
    cin>>pos;
    cout<<"Original Array"<<endl;
    for (i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (i=6;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=n;
    cout<<"New Array"<<endl;
    for (i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
