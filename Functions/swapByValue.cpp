#include <iostream> 
using namespace std; 

void swap(int x, int y) 
{ 
	cout << "Before swap, value of a :" << x << endl; 
	cout << "Before swap, value of b :" << y << endl; 
	int temp; 
	temp = x; 
	x = y; 
	y = temp; 
	cout << "After swap, value of a :" << x << endl; 
	cout << "After swap, value of b :" << y << endl; 	
	return; 
} 

int main () 
{ 

	int a = 100; 
	int b = 200;  
	swap(a, b); 

return 0; 
} 

