/* A program that tells the smallest number of coins needed to give someone change for a given dollar amount. */

#include <iostream>
#include <cmath>

using namespace std;
float ask(void);
int coins(float c);

int main(void)
{
	float change_due = ask();
	cout << coins(change_due);

}

float ask(void) // Asks for a dollar amount of change due, without any symbols.
{
	float x{ };
	do
	{
		cout << "How much money is due? ";
		cin >> x;
	} while (x < 0);
	
	return x;
}

int coins(float c) // Rounds the dollar amount given to the nearest penny to calculate the lowest number of coins due.
{
	int nearest_penny = round(c * 100);

	int q = nearest_penny / 25; // Caluclates number of quarters needed
	nearest_penny = nearest_penny - q * 25; // Subtract the amount of quarters found from change due.
	int d = nearest_penny / 10;
	nearest_penny = nearest_penny - d * 10;
	int n = nearest_penny / 5;
	nearest_penny = nearest_penny - n * 5;
	int p = nearest_penny;

	return q + d + n + p;
}