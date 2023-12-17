#include <bits/stdc++.h>
using namespace std;

int main() {
    int* dynamicArray = nullptr; 
    int size = 0; 
    char continueInput;

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    do {
        
        cout << "Enter a value: ";
        int num_nilendu;
        std::cin >> num_nilendu;

        if (num_nilendu > 0) {
            positiveCount++;
        } else if (num_nilendu < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }

        
        int* tempArray = new int[size + 1];

        
        for (int i = 0; i < size; ++i) {
            tempArray[i] = dynamicArray[i];
        }

       
        tempArray[size] = num_nilendu;

        size++;

        delete[] dynamicArray;

        dynamicArray = tempArray;

        cout << "Do you want to enter another value? (y/n): ";
        cin >> continueInput;

    } while (continueInput == 'y' || continueInput == 'Y');

    cout << "Values entered: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }

    cout << "\nNumber of positive values: " << positiveCount << endl;
    cout << "Number of negative values: " << negativeCount << endl;
    cout << "Number of zero values: " << zeroCount << endl;

    delete[] dynamicArray;

    return 0;
}
