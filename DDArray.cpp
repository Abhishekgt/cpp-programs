#include<iostream>
using namespace std;
int main()
{
	int A[2][3] = {{0,1,2}, {3,4,5}};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Element at A[" << i
				<< "][" << j << "]: ";
			cout << A[i][j]<<endl;
		}
	} 
	return 0; 
}

