#include <iostream>
#include <ctime>
using namespace std;
int main()
{

	bool hasPassedTest;
	int x, y;
	int NumberOfShares;
	double ShelfWidth, Bookwidth;
	hasPassedTest = true;
	void ex02();
	{
		x = rand() % 100
		y = rand() % 100

		if (y < x)
			cout("X, "<<x<<" is greater than Y, %d.\n" x, y);
		else (x < y || x = y)
			cout("Y, "<<y<<" is greater than X, %d.\n" y, x);
	}
	cout << ("Please enter the number of shares. \n");
	cin >> NumberOfShares;

	while (NumberOfShares > 100)
		cout<<("Number of shares" << NumberOfShares << " is greater than 100. \n");
	do (NumberOfShares < 100 || NumberOfShares = 100)
		cout<<("Number of shares" << NumberOfShares << " is less than or equal to 100. \n");

	cout <<("How wide is the bookshelf and how wide is each book? \n");
	cin >> ShelfWidth;
	cin >> Bookwidth);

	void ex03();
	{
		if (Bookwidth%ShelfWidth > 0)/*modulus checks for a remainder (x>0)*/
			cout << ("Bookwidth does not go into ShelfWidth in whole numbers. \n");
		else()
			cout << ("Bookwidth goes into Shelfwidth " << Bookwidth%ShelfWidth << "times.\n" );
	}
	double ShelfLife;
	int temperature;

	cout << "What is the chocolate's shelflife, and what is the outside temperature?\n";
	cin >> ShelfLife;
	cin >> temperature;

	if (temperature > 90)
		cout << ("Shelflife is "<<ShelfLife - 4<< " \n");
	else
		cout << ("Shelflife is "<<ShelfLife<< " .\n");

	return 0;
}