#include <iostream>
using namespace std;
void oil_leak() { //allocate 8 bytes from heap
 double *pointer = new double(32.54);
}
int main() {
oil_leak();
//After running, those bytes were not released. You've got more memory on your phone than what you have wasted, so what's the big deal if we just blew 8 bytes on a little function?
//Add the following code (at your own risk):
for(int j = 0; j < 150000; j++) 
{
 oil_leak();
}
}
