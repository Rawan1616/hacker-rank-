
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string to store the autobot's name
    string name;

    // Prompt the user to enter the autobot's name
    cout << "Enter the autobot's name: ";

    // Use getline to reed the full name (including spaces)
    getline(cin, name);

    // Print the personalized greeting
    cout << "Hello, " << name << "!" << endl;

    return 0;
}

