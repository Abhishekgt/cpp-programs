#include<iostream>
using namespace std;
class Rectangle
{
private:
int length, breadth;
public:
Rectangle(int a, int b)
{
length=a, breadth=b;
}

int area()
{
int  a=(length*breadth);
cout<<"area is: "<<a;
}
};

int main()
{
Rectangle r1(3,4);
r1.area();
return 0;
}

