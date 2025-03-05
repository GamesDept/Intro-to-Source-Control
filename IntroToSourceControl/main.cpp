#include <iostream>
#include <conio.h>

using namespace std;


bool IsPrimeNumber(int _x);

int main()
{
	cout << "Welcome!" << endl << endl;

	cout << "Printing prime numbers between 1 and 100" << endl;

	for (int i = 1; i <= 100; i++)
	{
		if (IsPrimeNumber(i) == true)
		{
			cout << i << ",";
		}
	}

	cout << endl<< "Goodbye!" << endl;
	return 1;
}

/// <summary>
/// Returns whether _x is a prime number. Assuming x is a positive integer.
/// </summary>
bool IsPrimeNumber(int _x)
{
	//functionality not implemented.
	return false;
}