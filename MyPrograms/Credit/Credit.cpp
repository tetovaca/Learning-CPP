/* A program to test whether a credit card number is valid or invalid. Only works for odd numbered cards right now. */

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long ask(void);
int digits(long long x);
// Could not figure out how to return an array so I put all the rest inside main().


int main(void)
{
	long long card_number{ };
	card_number = ask();                     //Asks for a credit card number.
	int length = digits(card_number);        // Counts the number of digits of card.

	vector<int> arr;
	for (int n = 0; n < length; n++)
	{
		arr.push_back(0);
	}
	for (int i = 0; i < length; i++)          // Stores the numbers in a vector separately to manipulate.
	{
		 arr[i]= card_number % 10;
		card_number = card_number / 10;
	}

	vector<int> arr2;
	for (int n = 0; n < length / 2; n++)
	{
		arr2.push_back(0);
	}
	int i = length - 2;
	for (int n = 0; n < length / 2; n++)      // Takes every other number starting from second to last and stroes in separate vector.
	{
		arr2[n] = arr[i];
		i = i - 2;
	}

	for (int i = 0; i < length / 2; i++)      // Multiplies each of those numbers by 2
	{
		arr2[i] = arr2[i] * 2;
		if (arr2[i] > 9)
		{
			arr2.push_back(arr2[i] % 10);     // Separates digits for anything greater than 9.
			arr2[i] = arr2[i] / 10;
		}
	}
	vector<int> arr3;
	int n = length - 1;
	for (int i = 0; i <= length / 2; i++)     // Third vector for the remaining numbers
	{
		arr3.push_back(arr[n]);
		n = n - 2;
	}
	
	int count{ };
	int arr2_size = arr2.size();
	for (int i = 0; i < arr2_size; i++)
	{
		count = count + arr2[i];
	}
	for (int i = 0; i <= length / 2; i++)    // Adds reamining numbers to the sum of the doubled digits.
	{
		count = count + arr3[i];
	}

	if (count % 10 == 0)                     // Gives a valid or invalid determination.
	{
		cout << "Valid!";
		if (arr2[0] == 4)
		{
			cout << "VISA";
		}
	}
	else 
	{
		cout << "Invalid!";
		
	}
	return 0;
}

long long ask(void)
{
	long long a{ };
	do
	{
		cout << "Credit card number: ";
		cin >> a;
	} 
	while (a <= 0);

	return a;
}

int digits(long long x)
{
	int counter{ };
	while (x >= 1)
	{
		x = x / 10;
		counter++;
	}

	return counter;
}

