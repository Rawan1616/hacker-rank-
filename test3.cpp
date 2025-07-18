#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    //  get number of hights to check from user 
    int numOfhights;
    cin  >> numOfhights; 

    vector<int> heightArray(numOfhights);

    //  get heights from user and store in array
    for (int i = 0 ; i < numOfhights ; i++) {
        cin >> heightArray[i];
    }

    // sort array in decsending orderto can get the highest heights from first 3 indices 
    sort(heightArray.begin(), heightArray.end(), greater<int>());

    // check if the hights less than , if not print the highest 3 hights
    if (numOfhights >= 3) {
        cout << heightArray[0] << endl;
        cout << heightArray[1] << endl;
        cout  << heightArray[2] << endl;
    } else {
        cout << "Not enough heights to find top 3!" << endl;
    }

    return 0;
}
