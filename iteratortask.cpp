// //print all
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> numbers = {10, 20, 30, 40, 50};
//     vector<int>::iterator it;
//     for (it = numbers.begin(); it != numbers.end(); ++it) {
//         cout << *it << " ";
//     }

//     return 0;
// }

//reverse
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> numbers = {10, 20, 30, 40, 50};
//     vector<int>::reverse_iterator rit;
//     for (rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
//         cout << *rit << " ";
//     }

//     return 0;
// }

//modify elements via iterator
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> numbers = {1, 2, 3, 4, 5};
//     for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
//         *it = (*it) * 2;
//     } 
//     for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
//         cout << *it << " ";
//     }
//     return 0;
// }


//find element using iterator
// #include <iostream>
// #include <list>
// #include <algorithm> 
// using namespace std;
// int main() {
//     list<int> numbers = {10, 20, 30, 40, 50};
//     int target = 30;
//     list<int>::iterator it = find(numbers.begin(), numbers.end(), target);
//     if (it != numbers.end()) {
//         cout << "Element " << target << " found in the list." << endl;
//     } else {
//         cout << "Element " << target << " not found in the list." << endl;
//     }
//     return 0;
// }


//insert
// #include <iostream>
// #include <list>
// using namespace std;
// int main() {
//     list<int> numbers = {10, 20, 30, 40, 50};
//     list<int>::iterator it = numbers.begin();
//     advance(it, 3);  
//     numbers.insert(it, 99);  

//     for (int num : numbers) {
//         cout << num << " ";
//     }

//     return 0;
// }


//iterate through map
// #include <iostream>
// #include <map>
// using namespace std;
// int main() {
//     map<string, int> studentMarks;
//     studentMarks["Ester"] = 85;
//     studentMarks["Ben"] = 92;
//     studentMarks["Charles"] = 78;
//     for (map<string, int>::iterator it = studentMarks.begin(); it != studentMarks.end(); ++it) {
//         cout << "Name: " << it->first << ", Marks: " << it->second << endl;
//     }

//     return 0;
// }


//erase specific element
// #include <iostream>
// #include <list>
// using namespace std;
// int main() {
//     list<int> numbers = {5, 10, 15, 11, 20};
    
//     list<int>::iterator it = find(numbers.begin(), numbers.end(), 10);

//     if (it != numbers.end()) {
//         numbers.erase(it);
//     }

//     for (int num : numbers) {
//         cout << num << " ";
//     }

//     return 0;
// }

//const iterator
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> numbers = {10, 20, 30, 40, 50};
//     for (vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
//         cout << *it << " ";
//     }

//     return 0;
// }

//count even numbers
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> numbers = {1,2,3,4,5,6,7,8,9,0};
//     int evenCount = 0;
//     for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
//         if (*it % 2 == 0) {
//             ++evenCount;
//         }
//     }
//     cout << "Number of even elements: " << evenCount << endl;
//     return 0;
// }


//iterator with set
// #include <iostream>
// #include <set>
// #include <string>
// using namespace std;
// int main() {
//     set<string> words = {"apple", "banana", "orange", "apple", "banana", "grape"};
//     for (set<string>::iterator it = words.begin(); it != words.end(); ++it) {
//         cout << *it << " ";
//     }
//     return 0;
// }