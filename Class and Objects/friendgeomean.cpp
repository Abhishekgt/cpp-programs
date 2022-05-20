#include<iostream>
#include<cmath>
using namespace std;
class sample
{
	int a;
	int b;
	public:
		void setvalue(){a=10;b=20;}
		friend float geomean(sample s);
};
float geomean(sample s)
{
	return float(sqrt(s.a*s.b));
}
int main()
{
	sample X;
	X.setvalue();
	cout<<"Mean Value: "<<geomean(X)<<endl;
	return 0;
}
