//exmaple 1:
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> nums={10,20,30};
//     vector<int>::iterator it;//declaring iterator and also can be declare using auto
//     for(it = nums.begin();it !=nums.end(); ++it){
//         cout<<*it<<"";//accessing elements using iterator
//     }
// return 0;
// }


//modifying elements using iterators
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> nums={10,20,30};
//     for(auto it = nums.begin();it !=nums.end(); ++it){*it*=2; //double each other
//     }
//     for (int num : nums){
//         cout<<num<<"";
//     }
//     return 0;
// }

//using iterators with list
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<string>fruits ={ "apple","banana","cherry"};
//     for(auto it = fruits.begin();it !=fruits.end();++it){
//         cout<<*it<<"";
//     }
//     cout<<"\nreverse:\n";
//     for(auto rit = fruits.rbegin();rit !=fruits.rend();++rit){
//         cout<<*rit<<"";
//     }
//     return 0;
// }


//find a element
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//         vector<int> nums={3,5,5,7,9};
//         int key=7;
//         bool found=false;
//             for(auto it = nums.begin();it !=nums.end();++it){
//                 if(*it = key){
//                     cout<<"found"<<key<<"at position"<<(it - nums.begin())<<endl;
//                     found=true;
//                     break;
//                 }
// }
// if(!found){
//     cout<<key<<"not found."<<endl;
// }return 0;}

//iterators over keys and pair values
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     map<string,int>ages={
//         {"Alice",25},
//         {"Bob",23},
//         {"Charlie",28}
//     };
//     int main(){
//         map<string,int> ages={
//             for(auto it=ages.begin();it != ages.end(); ++it){
//                 cout<<it->first<<"is"<<it->second<<"years old.\n;"
//             }
//         }
//     }
// }