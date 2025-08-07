#include <iostream>
using namespace std;

int main() {
    
    int arr[7] = {12, 7, 9, 20, 33, 4, 18};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int evenCount = 0;
    int oddCount = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }


    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
