#include<iostream>
using namespace std;
class perimeter
{
	int l,b,p;
	public:
		perimeter()
		{
			cout<<"\n Enter the value of l and b: ";
			cin>>l>>b;
		}
		perimeter(int a)
		{
			l=b=a;
		}
		perimeter(int l1, int b1)
		{
			l=l1;
			b=b1;
		}
		perimeter(perimeter &peri)
		{
			l=peri.l;
			b=peri.b;
		}
		void calculate(void);
};
void perimeter::calculate(void)
{
	p=2*(l+b);
	cout<<p;
}
int main()
{
	perimeter obj,obj1(2),obj2(2,3);
	cout<<"\n perimeter of rectangle is ";
	obj.calculate();
	
	cout<<"\n perimeter of square is ";
	obj1.calculate();
	
	cout<<"\n perimeter of rectangle is ";
	obj2.calculate();
	
	cout<<"\n perimeter of rectangle is ";
	perimeter obj3(obj2);
	obj3.calculate();
	
	return 0;
}
