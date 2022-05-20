#include<iostream>
using namespace std;
inline void cube(int a)
{
	cout<<a*a*a;
}
int main()
{
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	cout<<"Cube of "<<a<<" is ";
	cube(a);
}
