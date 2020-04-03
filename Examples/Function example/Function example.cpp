#include <iostream>

using namespace std;

void doPrint() // doPrint() is the called function.
{
	cout << "In doPrint()\n";
}

int main(void)
{
	cout << "Starting main()\n";
	doPrint(); // Interupt main() to call doPrint(). main() is the caller.
	cout << "Ending main()\n"; // This statement is executed after doPrint() ends.

	return 0;
}