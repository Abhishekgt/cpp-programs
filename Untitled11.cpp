// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,t,sum=0;
    cout << "Enter the number"<<endl;
    cin>>n;
    t=n;
    while(t>0)
    {
        sum=sum+(t%10);
        t/=10;
    }
    cout<<"Sum of digits of "<<n<<" is "<<sum<<endl;
    return 0;
}
