#include<iostream>
using namespace std;
inline void addSub(int a, int b)
{
	cout<<"Sum: "<<(a+b)<<endl;
	cout<<"Difference: ";
	int g=(a>=b)?(a-b):(b-a);
	cout<<g;
}
int main()
{
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	int b;
	cout<<"Enter the number: ";
	cin>>b;
	addSub(a,b);
}
