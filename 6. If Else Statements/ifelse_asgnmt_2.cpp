#include <bits/stdc++.h>
using namespace std;
/*
Write a Program for Grading System:
Take marks as input and print the corresponding grade:
a. Below 25 : Grade F
b. 25 - 44 : Grade E
b. 45 - 49 : Grade D
b. 50 - 59 : Grade C
b. 60 - 79 : Grade B
b. 80 - 100 : Grade A
*/

int main () {
    int marks;
    cin >> marks;

    if (marks < 25) {
        cout << "Grade F";
    }
    else if (marks >= 25 && marks <= 44) {    // && Is used for 'AND' operation to satisfy two conditions
        cout << "Grade E";
    }
    else if (marks >= 45 && marks <= 49) {
        cout << "Grade D";
    }
    else if (marks >= 50 && marks <= 59) {
        cout << "Grade C";
    }
    else if (marks >= 60 && marks <= 79) {
        cout << "Grade B";
    }
    else if (marks >= 80 && marks <= 100) {
        cout << "Grade A";
    }
}