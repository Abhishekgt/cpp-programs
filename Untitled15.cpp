// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"Address of a["<<i<<"] : "<<&a[i]<<endl;
    }

    return 0;
}
