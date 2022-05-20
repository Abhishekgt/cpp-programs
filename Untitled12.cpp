// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,i=1,sum=0;
    cout << "Enter the limit"<<endl;
    cin>>n;
    while(i<=n)
    {
        if(i!=n)
        cout<<"("<<i<<"*"<<i<<") + ";
        else
        cout<<"("<<i<<"*"<<i<<")"<<endl;
        sum=sum+(i*i);
        i++;
    }
    cout<<"Sum of the series: "<<sum<<endl;
    return 0;
}
