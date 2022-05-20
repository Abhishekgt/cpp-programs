// C++ Program to concatenate two string
// using unary operator overloading
#include <iostream>
#include <string.h>
using namespace std;

class AddString {
public:
	char s1[25], s2[25];
	AddString(char str1[], char str2[])
	{
		// Initialize the string to class object
		strcpy(this->s1, str1);
		strcpy(this->s2, str2);
	}

	// Overload Operator+ to concat the string
	void operator+()
	{
		cout << "\nConcatenation: " << strcat(s1, s2);
	}
};

// Driver Code
int main()
{
	char str1[] = "Hello";
	char str2[] = "Avinash";
	AddString a1(str1, str2);
	+a1;
	return 0;
}

