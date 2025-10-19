#include <iostream>
#include <string>
using namespace std;

int main () {
	string Proper = "Ola Amiga"; // My String
	cout << "This is the .at() Output: " << Proper.at(2) << "\nThis is the Output with String[2] array method: " << Proper[2]; // .at is in string library, and, [2] method is array method.
	return 0;
}