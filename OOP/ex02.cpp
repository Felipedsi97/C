#include <iostream>


using namespace std;

int main ()
{
	double* ptr;
	try 
{
	for(;;)
	{
		ptr = new double[50];
		ptr[0] = 2.5;
		
	}
}

catch(bad_alloc&b)
{
	cout << b.what() << endl;
}
	
	

return 0;
}
