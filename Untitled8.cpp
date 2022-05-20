// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int number,n;
    int fact=1;
    cout<<"Enter the number"<<endl;
    cin>>number;
    n=number;
    Top:if(number>0)
    {
        fact=fact*number;
        number--;
        goto Top;
    }
    cout<<"Factorial of the number is: "<<fact;
    return 0;
}
