#include <iostream>
#include <string.h>
using namespace std;
class Time {
int  hr,mn,sc;
public:
	void input()
	{
		cout<<"Enter time"<<endl;
		cin>>hr,mn,sc;
	}
	void display()
	{
		cout<<hr<<":"<<mn<<":"<<sc;
	}
	Time operator+()
	{
		
	}
};

// Driver Code
int main()
{
	
	return 0;
}

