#include <bits/stdc++.h>
using namespace std;
// C++ Structs, also known as structures.

int main () {
    struct {     // Structure declaration
        int x;    // Members of the structure
        float y;
        string z;
        double s;
    } myStructure;     // Variable of the structure

    myStructure.z = "Say Hello to World Dudu!!!";  // Accessing members using dot operator
    myStructure.x = 207;  

    cout << myStructure.z << "\n";
    cout << myStructure.x << "\n";
    return 0;
}