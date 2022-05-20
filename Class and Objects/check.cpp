#include <iostream>
using namespace std;

// function with 2 parameters
//void display(int var1, double var2) 
//{
//    cout << "Integer number: " << var1;
//    cout << " and double number: " << var2 << endl;
//}

// function with double type single parameter
double display(double var)
 {
//    cout << "Double number: " << var << endl;
return var;
}
// function with int type single parameter
int display(int var) 
{
//    cout << "Integer number: " << var << endl;
return var;
}
int main()
 {
    int a = 5;
    double b = 5.5;
    // call function with int type parameter
//    display(a);
    // call function with double type parameter
    cout<<display(b);
    // call function with 2 parameters
//    display(a, b);
    return 0;
}

