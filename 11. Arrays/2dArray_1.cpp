#include <bits/stdc++.h>
using namespace std;

// 2d Array

int main () {
    int arr[2][3];     //  2 rows and 3 columns, as first value is for rows and second for columns
    
    arr[1][3] = 78;  // assigning value to 2nd row and 4th column (indexing starts from 0, as we remember)

    cout << arr[1][3] << endl;  // accessing value at 2nd row and 4th column

    // other rows will have garbage values if not initialized
    cout << arr[0][0] << "; This is garbage value." << endl;  // garbage value
    return 0;
}