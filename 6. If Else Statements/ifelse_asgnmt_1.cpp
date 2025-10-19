#include <iostream>
using namespace std;

// Write a program that takes an input of age and Prints if you are adult or not.

int main () {
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "You are an adult." << endl;
    }
    else {
        cout << "You are not an adult." << endl;
    }

    return 0;
}