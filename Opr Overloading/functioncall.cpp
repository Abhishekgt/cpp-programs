// The pointer pointing to local variable becomes
// dangling when local variable is not static.
#include<stdio.h>
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
 printf("%d", *p);
 return 0;
}
// The pointer pointing to local variable doesn't
// become dangling when local variable is static.
//#include<stdio.h>
// 
//int *fun()
//{
// // x now has scope throughout the program
// static int x = 5;
// 
// return &x;
//}
// 
//int main()
//{
// int *p = fun();
// fflush(stdin);
// 
// // Not a dangling pointer as it points
// // to static variable.
// printf("%d",*p);
//}
