#include <iostream>

using namespace std; // Allows me to not have to type std:: everytime.

int main(void)
{
	cout << "Enter a number: "; // Asking user for input
	int x{ }; // Direct brace zero-initialize variable x
	cin >> x; // Store user input in variable x
	cout << "You entered " << x << '\n';
	return 0;
}