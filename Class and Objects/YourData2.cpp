#include<iostream>
#include<string>
using namespace std;
class data
{
	public: 
	string name;
	int age; 
	void show();
};
void data::show()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age;
	}
int main()
{
	data obj;
	cout<<"Enter your name: "; 
	cin>>obj.name;
	cout<<"Enter your age: ";
	cin>>obj.age;
	obj.show();
}
