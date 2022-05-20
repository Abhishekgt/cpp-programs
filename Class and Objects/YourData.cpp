#include<iostream>
#include<string>
using namespace std;
class data
{
	public: 
	void show(string name,int age)
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age;
	} 
};
int main()
{
	data obj;
	string name;
	int age;	
	cout<<"Enter your name: "; 
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	obj.show(name,age);
}
