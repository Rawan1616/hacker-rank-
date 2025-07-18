#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for max_element
using namespace std;

// reusable function make it separates 
void printArray(vector<int>&arr){
    for(int number  : arr ){
        cout << number << " ";
    }
}

int main (){
    // take the number of elements in array from user
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector <int> numArray (n);
    // take element by element from user and store element in numArray 
    for (int i = 0; i < n; i++){
        cout << "Enter element : ";
        cin >> numArray[i];
    }
  

    // bubble sort 
    // first loop for n-1 pass (main pass)
    // second loop for i from 0 to n-2 (smaller passes)
   for (int  i = 0; i < n ; i++)
   {
      for (int j = 0; j < n - i - 1; j++){
        if (numArray[j] > numArray[j + 1]) {
            // Swap numArray[j] and numArray[j+1]
            swap (numArray[j], numArray[j + 1]);  
      }
   }
//    print updates on array after each iteration on array untill it be fully sorted 
   cout << " array after this iteration is : ";
   printArray(numArray);
   cout << endl;
   
}
}