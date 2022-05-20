#include <iostream>
using namespace std;
class Cube
{ 	public:
	int side;
	public:
	Cube()
	{
		side=10;           // Default Constructor
	}
};
int main()
{	Cube c;
	cout<<"\nValue is:"<<c.side;
}

