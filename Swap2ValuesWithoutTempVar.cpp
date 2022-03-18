#include <iostream>
using namespace std;

int main()
{
	// swap 2 values without a temp variable
	// I just learned this today wew.
	int a = 20;
	int b = 10;

	a += b;    // a = 30
	b = a - b; // b = 20
	a -= b;    // a = 10

	cout << "a = " << a << endl;
	cout << "b = " << b;

	system("pause>0");
}