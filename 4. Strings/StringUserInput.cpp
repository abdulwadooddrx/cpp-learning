#include <iostream>
#include <string>
using namespace std;

int main(){
	string FirstName;
	string LastName;
	
	cout << "What is your First Name?";
	cin >> FirstName;
	cout << "Your First Name is : " << FirstName << "\n";
	cout << "What is your Last Name?";
	cin >> LastName;
	cout << "Your Last Name is : " << LastName << "\n";
	string YourName = FirstName + " " + LastName;
	cout << "Your Complete Name is : " << YourName;
	return 0;
}