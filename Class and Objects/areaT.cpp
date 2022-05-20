#include<iostream>
using namespace std;
class Rectangle
{
	public: 
	int area(int l,int b)
	{
		return l*b;
	} 
};
int main()
{
	Rectangle obj;
	int b,l;
	cout<<"Enter length of rectangle: "; 
	cin>>l;
	cout<<"Enter breadth of rectangle: ";
	cin>>b;
	cout<<"Area of rectangle: "<<obj.area(l,b);
}
