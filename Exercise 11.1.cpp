#include <iostream>
#include <string>
using namespace std;
int main()
{
	double ArraySize;
	const double* const pSize = &ArraySize;
	int ArrayNums[pSize];
	int Sum = 0;
	int AboveAverage = 0;
	double ArrayAverage = Sum / ArraySize;
	
	cout << "How long is the list of integers? \n"; 
	cin >> ArraySize; 
	
	for (int a = 0; a < ArraySize; a++)
	{
		ArrayNums[a] = a+1; 
	}

	for (int b = 0; b < ArraySize; b++)
	{
		cout << "Enter elements " << b + 1 << "of this array." << endl; 
		
		cout << ArrayAverage; 
	}

	for (int c = 0; c < ArraySize; c++)
	{
		if (ArrayNums[c] > ArrayAverage)
			cout << c << endl;
		AboveAverage++;
		cout << "The number above average is: " << AboveAverage << endl;
	}

	return 0;
}