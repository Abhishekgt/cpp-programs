#include<iostream>
using namespace std;
class dynamic{
	int *p;
	private:
	public:
		dynamic()
		{
			p=new int;
			*p=10;
		}
		dynamic(int v)
		{
			p=new int;
			*p=v;
		}
		int dis()
		{
			return(*p);
		}
};
int main(){
	dynamic o,o1(9);
	cout<<"Value of object o's p is: ";
	cout<<o.dis()<<endl;
	cout<<"Value of object o1's p is: ";
	cout<<o1.dis()<<endl;
	return 0;
}
