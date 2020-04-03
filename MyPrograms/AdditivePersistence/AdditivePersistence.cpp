/* A program to calculate the additive persistence of an integer. Challenge #374 on r/dailyprogrammer.
   Does not work for large numbers. */

#include<iostream>

using namespace std;

void additivePersistence(void);
int sumDigits(int a);

int main(void)
{
	additivePersistence();

	return 0;
}

void additivePersistence(void) // Calculates the additive persistence of an integer given by the user.
{
	cout << "Enter an integer: ";
	int x{ };
	cin >> x;
	int i{ };
	while (x > 9)
	{
		x = sumDigits(x);
		i++;
	}

	cout << "The additive persistence of your number is " << i;
}

int sumDigits(int a) // Sums the digits of some integer.
{
	int s{ };
	while (a)
	{
		s += a % 10;
		a = a / 10;
	}
	return s;
}