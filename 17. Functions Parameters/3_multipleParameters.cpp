#include <bits/stdc++.h>
using namespace std;

// Functions with Multiple Parameters

void myFunction(string fname, int age) {
    cout << fname << " is " << age << " years old.\n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}
/*Outputs
    Liam is 3 years old.
    Jenny is 14 years old.
    Anja is 30 years old.*/