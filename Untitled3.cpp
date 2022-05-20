// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,i,p=1;
    cout<<"Enter the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        p=p*i;
    }
    cout<<"Factorial: "<<p<<endl;
    

    return 0;
}
