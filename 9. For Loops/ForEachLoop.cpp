#include <iostream>
#include <string>
using namespace std;

int main () {
	
	string myCar[5] = {"Honda", "Toyota", "Audi", "BMW", "Mercedes"};
	for (string i : myCar) {
		cout << i << "\n";
	}
}