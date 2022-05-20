#include<iostream>
using namespace std;
class Student {
int Roll;
string Name;
float Marks;
public:
Student( int r, string nm, float m)              //Constructor 1 Parameterized
{  	Roll=r;
	Name=nm;
	Marks=m;    
}
Student(Student &S)		//Constructor 2 //Copy
{ 	Roll=S.Roll;
	Name=S.Name;
	Marks=S.Marks;    
}
void Display()
{
cout<<"\n Roll:"<<Roll;
cout<<"\n Name:"<<Name;
cout<<"\n Marks:"<<Marks;
} };
int main()
{	Student S1(2, "ABC", 90);
	Student S2(S1);     //statement 1
	S1.Display();
	cout<<"\n----------";
	cout<<"\n Values in object S2";
	S2.Display();
}

