#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // Skips the Number 4
        }
        if (i == 9) {
            break; // Stops the loop @ = 9
        }
        cout << i << "\n"; // Show the value of i
    }
    return 0;
}