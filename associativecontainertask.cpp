//using map
// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;
// int main() {
//     map<string, char> studentGrades = {
//         {"Alice", 'A'},
//         {"Bob", 'B'},
//         {"Charlie", 'C'},
//         {"David", 'B'},
//         {"Eva", 'A'}
//     };
//     cout << "Student Grades:\n";
//     for (const auto& entry : studentGrades) {
//         cout << "Name: " << entry.first << ", Grade: " << entry.second << endl;
//     }

//     return 0;
// }


//set
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     int inputs[10] = {5, 3, 8, 3, 1, 5, 9, 2, 8, 7};
//     set<int> uniqueValues;
//     for (int i = 0; i < 10; ++i) {
//         uniqueValues.insert(inputs[i]);
//     }

//     cout << "Unique values: ";
//     for (int val : uniqueValues) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }



// times a number appear
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     multiset<int> numbers = {5, 2, 3, 2, 4, 5, 6, 3, 2, 5};
//     int query;
//     cout << "Enter a number to check its frequency: ";
//     cin >> query;
//     int count = numbers.count(query);

//     if (count > 0) {
//         cout << "The number " << query << " appears " << count << " times." << endl;
//     } else {
//         cout << "The number " << query << " does not appear in the multiset." << endl;
//     }

//     return 0;
// }


//checking
#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> numbers = {10, 20, 5, 15, 30, 25, 40, 35, 50, 45};


    int query;
    cout << "Enter a number to check if it's in the set: ";
    cin >> query;

    if (numbers.find(query) != numbers.end()) {
        cout << "The number " << query << " is present in the set." << endl;
    } else {
        cout << "The number " << query << " is NOT present in the set." << endl;
    }

    return 0;
}
