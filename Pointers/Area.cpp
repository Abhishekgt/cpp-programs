#include <iostream> 
using namespace std; 
class Rectangle 
{ 
	private: int length; 
	int breadth; 
	public:
	Rectangle(int l, int b) 
	{ 
		length=l; 
		breadth=b; 	
	} 
	int getArea() 
	{ 
		return length*breadth; 
	} 
};
 int main() 
{
Rectangle var1(5,2);
 Rectangle* ptr = &var1; 
 int area = ptr->getArea();
 cout<<"Area of rectangle is: "<<area; 
 return 0; 
 }

