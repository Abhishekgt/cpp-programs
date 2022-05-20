#include<iostream>
#include<string>
using namespace std;
class complex
{
	public:	
		int real;
		int imaginary;
	public:
		complex(int re,int img)
		{
			real=re;
			imaginary=img;
		}
};
int main()
{
	int re,img;
	cout<<"Enter 1st number: ";
	cin>>re>>img;
	complex num1(re,img);
	cout<<"Enter 2nd number: ";
	cin>>re>>img;
	complex num2(re,img);
	cout<<"Sum: "<<num1.real+num2.real<<"+"<<num1.imaginary+num2.imaginary<<"i";
	return 0;
}
