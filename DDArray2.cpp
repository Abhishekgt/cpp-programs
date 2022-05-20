#include<iostream>
using namespace std;
int main()
{
	int A[2][3] = {{0,1,2}, {3,4,5}};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Element at A[" << j
				<< "][" << i << "]: ";
			cout << A[j][i]<<endl;
		}
	} 
	return 0; 
}

