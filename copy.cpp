#include <iostream>
using namespace std;
int main() {
    int org[] = {5, 10, 15, 20, 25};
    int n = sizeof(org) / sizeof(org[0]);
    int copy[n];

    for (int i = 0; i < n; i++) {
        copy[i] = org[i];
    }
    cout << "Copied array: ";
    for (int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }

    return 0;
}
