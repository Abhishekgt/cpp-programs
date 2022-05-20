#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class Number
{ int n;
 public:
 void printDetails(){ cout<<n;  }
 Number(int n)      { this->n=n;  }
 operator int()       { return n;  }
};
int main()
{ Number numb=100;
 numb.printDetails();
 int x=numb;//numb.operator int()
 cout<<"\nThe value is"<<x;
 return 0;
}

