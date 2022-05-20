// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"Enter the third number"<<endl;
    cin>>c;
    cout<<"Enter the fourth number"<<endl;
    cin>>d;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            cout<<"Greatest: "<<a<<endl;
            else
            cout<<"Greatest: "<<d<<endl;
        }
        else
        {
            if(c>d)
            cout<<"Greatest: "<<c<<endl;
            else
            cout<<"Greatest: "<<d<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            cout<<"Greatest: "<<b<<endl;
            else
            cout<<"Greatest: "<<d<<endl;
        }
        else
        {
            if(c>d)
            cout<<"Greatest: "<<c<<endl;
            else
            cout<<"Greatest: "<<d<<endl;
        }
    }

    return 0;
}
