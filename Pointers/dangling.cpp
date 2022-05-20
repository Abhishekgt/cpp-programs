// The pointer pointing to local variable becomes
// dangling when local variable is not static.
#include<stdio.h>
#include<iostream>
using namespace std;
int *fun()
{
// x is local variable and goes out of
 // scope after an execution of fun() is
 // over.
 int x = 5;
 
 return &x;
}
int main()
{
 int *p = fun();
 fflush(stdin);
 
 // p points to something which is not
 // valid anymore
 cout<< *p;
 return 0;
}

