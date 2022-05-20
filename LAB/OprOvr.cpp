#include<iostream>
#include<string>
using namespace std;
class SumL
{
	public:
		string s1; int ls1;
		string s2; int ls2;
	public:
		SumL(int x, int y)
		{
			ls1=x;
			ls2=y;
		}
		int operator+()
		{
			int s;
			s=ls1+ls2;
			return s;
		}
		void show(int x)
		{
			cout<<"Sum of the length of the strings: "<<x;
		}
};
int main()
{
	string s1,s2;
	cout<<"Enter first string"<<endl;
	cin>>s1;
	cout<<"Enter second string"<<endl;
	cin>>s2;
	SumL ob(s1.length(),s2.length());
	int x=+ob;
	ob.show(x);
}
