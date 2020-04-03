/* A program to add two number then subract the second from the first. */

#include <iostream>

using namespace std;

int main(void)
{
	cout << "Give me an integer: ";
	int x{}, y{};
	cin >> x;
	cout << "Now Give me another: ";
	cin >> y;
	cout << x << " + " << y << " is " << x + y << "." << '\n';
	cout << x << " - " << y << " is " << x - y << ".";

	return 0;
}