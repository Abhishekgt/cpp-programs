#include<iostream>
using namespace std;

class Rectangle
{
private:
int length, breadth;
public:
Rectangle()
{
length=5,breadth=6;
}
int area()
{
int  a=(length*breadth);
cout<<"area is: "<<a;
}
};
int main()
{
Rectangle r1;
r1.area();
return 0;
}

