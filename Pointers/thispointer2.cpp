#include<iostream>
using namespace std;
class A
{
	private:
		int x,y,z;
	public:
		void set(int x,int y,int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		void print()
		{
			cout<<x<<y<<z;
		}
};
int main()
{
	A obj;
	obj.set(22,78,89);
	obj.print();
	return 0;
}
