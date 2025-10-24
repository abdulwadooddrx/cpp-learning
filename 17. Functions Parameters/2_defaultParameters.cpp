#include <bits/stdc++.h>
using namespace std;

// Functions with Default Parameters

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction(); // will use the default parameter value
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA