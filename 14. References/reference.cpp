#include <bits/stdc++.h>
using namespace std;
// C++ References

int main() {
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food

    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; // Outputs Burger
    cout << meal << "\n"; // Outputs Burger

    return 0;
}