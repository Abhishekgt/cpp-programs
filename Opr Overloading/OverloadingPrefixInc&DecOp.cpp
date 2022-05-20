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
		};
		Number(int n)
		{
			x=n;
		}
		void show_data()
		{
			cout<<"\n x="<<x;
		}
		Number operator++()
		{
			x++;
			return Number(x);
		}
		friend Number & operator--(Number &);
};
Number & operator--(Number &N)
{
	N.x=N.x-1;
	return N;
}
main()
{
	Number N1(10),N2,N3(20),N4;
	N2=++N1;
	N2.show_data();
	N4=--N3;
	N4.show_data();
}
