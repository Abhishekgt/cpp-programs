#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class Number
{ int n;
 public:
 	void show()
 	{
 		cout<<n;
	 }
 Number(int n){ this->n=n;}
};
int main()
{ Number numb=100;
numb.show();
 return 0;}


