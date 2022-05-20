// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,b,c,max=0;
    cout << "Enter the first number"<<endl;
    cin>>a;
    cout << "Enter the second number"<<endl;
    cin>>b;
    cout << "Enter the third number"<<endl;
    cin>>c;
    if(a>max)
    {
        max=a;
    }
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    cout<<"Greatest: "<<max;

    return 0;
}
