//sequence containers store elements in linear order(one after the other)
//3 types
//vector->dynamice array(resizable)
//list->doulbed linked
//deque->double ended queue


//vetor
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v={10,20,30};
//     v.push_back(40);//add at end
//     for(int x:v)
//     cout<<x<<"";}//output=>10 20 30 

//some function to access 
// vector<int> v1;
// v1.push_back(10);
// v1.pop_back();
// v1.size();
// v1.at();
// v1.insert();
// v1.erase();
//v1.front();
//v1.back();
  
//list
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l= {1,2,3};
//       l.push_front(0);//add at front
//       for(int x:l)
//     cout<<x<<"";}//output=>0 1 2 3  

//some function to access 
// list<int> l1;
// l1.push_back(10);
// l1.push_front(5)
// l1.pop_back();
//l1.pop_front();
// l1.size();
// l1.at();
// l1.sort();
// l1.remove();
//l1.clear();
//l1.reverse();


//deque
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
      d.push_front(0);//add at front
      d.push_back(5);//add at end
      for(int x:d)
    cout<<x<<"";}//output=>0 5 

//some function to access 
// deque<int> d1;
// d1.push_back(10);
// d1.push_front(5)
// d1.pop_back();
//ld.pop_front();
// d1.size();
// d1.at();
// d1.sort();
//d1.clear();