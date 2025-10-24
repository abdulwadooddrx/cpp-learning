#include <bits/stdc++.h>
using namespace std;
// Functions Passed by Reference

void changeValue(int &num) {
  num = 50;
}

int main() {
  int value = 10;
  changeValue(value);  // Call the function and change the value to 50
  cout << value; 
  return 0;
}