#include <bits/stdc++.h>
using namespace std;
// C++ Enums...

enum Level {     // Enum declaration
  LOW = 25,      // Enum members
  MEDIUM = 50,   // Enum members
  HIGH = 75      // Enum members
};

int main () {
    enum Level myVar = MEDIUM;     // Variable of the enum
  cout << myVar;  // outputs 50
  return 0;
}