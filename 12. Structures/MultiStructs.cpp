#include <bits/stdc++.h>
using namespace std;
// Multiple Structures in C++

int main () {
    struct {     // Structure declaration
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Putting data into the first structure
myCar1.brand = "BMW";
myCar1.model = "m5";
myCar1.year = 2006;

// Putting data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Printing the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

return 0;
}