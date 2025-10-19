#include <iostream>
#include <string>
using namespace std;

int main () {
	for (int i = 0; i <= 3; ++i) {
		cout << "This is H2 Heading" << "\n";
		
		for (int j = 1; j <= 2; ++j) {
			cout << " This is H3 Heading" << "\n";
			
			for (int k = 1; k <= 2; ++k) {
				cout << "  This is H4 Heading" << "\n";
			}
		}
	}
}