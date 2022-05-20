// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout << "Enter the number"<<endl;
    cin>>n;
    if(n%3==0 && n%7==0)
    {
        cout << "Multiple of 3 and 7"<<endl;
    }
    else if(n%3==0)
    {
        cout << "Multiple of 3"<<endl;
    }
    else if(n%7==0)
    {
        cout << "Multiple of 7"<<endl;
    }
    else
    {
        cout << "Neither multiple of 3 nor of 7"<<endl;
    }

    return 0;
}
