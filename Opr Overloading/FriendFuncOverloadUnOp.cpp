#include<iostream>
using namespace std;
class Number
{
	private:
		int x;
	public:
		Number()
		{
			x=0;
		}
		Number(int n)
		{
			x=n;
		}
		void show_data()
		{
			cout<<"\n x="<<x;
		}
		friend Number & operator-(Number &);
};
Number & operator -(Number &N)
{
	N.x=-N.x;
	return N;
}
main()
{
	Number N1(100),N2;
	N2=-N1;
	N2.show_data();
}
