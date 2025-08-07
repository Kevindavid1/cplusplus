#include <iostream>
#include <vector>

using namespace std;

int main() {
  
    vector<int> numbers = {12, 7, 5, 10, 3, 8, 15, 2, 9, 6};
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    for (int num : numbers) {
        if (num % 2 == 0)
            evenNumbers.push_back(num);
        else
            oddNumbers.push_back(num);
    }
    

    cout << "Even numbers: ";
    for (int num : evenNumbers)
        cout << num << " ";
    cout << endl;

    cout << "Odd numbers: ";
    for (int num : oddNumbers)
        cout << num << " ";
    cout << endl;

    return 0;
}
