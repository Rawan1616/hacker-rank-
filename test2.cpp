#include <iostream>
using namespace std;

int main() {
    cout << "Please insert the height of the pyramid:" << endl;

    int height;
    cin >> height;

    // Loop through each row
    for (int i = 1; i <= height; i++) {
        // Print stars equal to the row number
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Move to the next line after printing stars for the row
        cout << "\n";
    }

    return 0;
}
