#include<iostream>
using namespace std;
class students
{
	public: 
	string name;
	string br;
	int uid;
	int store()
	{
		cout<<"Enter name of student: "; 
		cin>>name;
		cout<<"Enter UID of student: ";
		cin>>uid;
		cout<<"Enter branch of student: ";
		cin>>br;
		cout<<endl;
	} 

};

int main()
{
	students obj1;	
	students obj2;
	obj1.store();
	obj2.store();
	cout<<"\t"<<"obj1"<<"\t"<<"obj2"<<endl;
	cout<<"Name\t"<<obj1.name<<"\t"<<obj2.name<<endl;
	cout<<"UID\t"<<obj1.uid<<"\t"<<obj2.uid<<endl;
	cout<<"Branch\t"<<obj1.br<<"\t"<<obj2.br<<endl;
}
