#include<iostream>
using namespace std;
class counter
{
int c;
public:
counter(int a)
{
c=a;
}
counter(counter &ob)
{
cout<<"copy constructor invoked ";
c=ob.c;
}

void show()
{
cout<<c;
}
};

int main()
{
counter C1(10);
counter C2(C1);
C1.show();
C2.show();
return 0;
}

