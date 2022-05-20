#include<iostream>
#include<string>
using namespace std;
class emp
{
	private:
		int uid;
		string name;
		double salary;
	public:
		emp(int ud,string nm,double sal)
		{
			uid=ud;
			name=nm;
			salary=sal;
		}
		void dis()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"UID: "<<uid<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};
int main()
{
	int ud;
	string nm;
	double sal;
	cout<<"Enter name of employee: ";
	cin>>nm;
	cout<<"Enter UID of employee: ";
	cin>>ud;
	cout<<"Enter salary of employee: ";
	cin>>sal;
	emp ob(ud,nm,sal);
	ob.dis();
	return 0;
}
