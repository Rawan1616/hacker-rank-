#include <iostream>
#include <vector>
#include <algorithm>  // for max_element
using namespace std;

int main() {
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;

    vector<int> numArray(n);
    vector<int> numFreq(100, 0);  // initialize with 0
    
    for (int i = 0; i < n; i++) {
        cout << "Enter the element: ";
        cin >> numArray[i];
        numFreq[numArray[i]]++;
    }

    // print the frequency of each element as it input 
    cout << "Elements and their frequencies:\n";
    for (int i = 0; i < n; i++) {
        cout  << numFreq[numArray[i]] ;
        cout << " " ;
    }

    // Get the maximum frequency value
    int maxFrequency = *max_element(numFreq.begin(), numFreq.end());

    // print the max frequant element
    cout << "\nMost frequent element(s):" << endl;
   
    // check if there is more than onr element has the same max frequency
    // then print it 
    for (int i = 0; i < numFreq.size(); i++) {
        if (numFreq[i] == maxFrequency) {
            cout << i << " (appeared " << maxFrequency << " times)" << endl;
        }
    }

    return 0;
}
