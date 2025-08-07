//2 types set and map
#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    //---------SET---------//
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10);   //duplicate is added
    s.insert(30);

    cout<<"set elements: ";
    for(int x:s)
     cout<<x<<"";//output=>10 20 30
    cout<<"\n";

    s.erase(20);
    cout<<"aftre removing: "<<endl;
    for(int x:s)
     cout<<x<<"";//output=>10 20 
    cout<<"\n";
     cout<<"set size:"<<s.size()<<"\n";
     cout<<(s.find(10)!=s.end()?"10 found\n":"10 not found\n")

     ////////////MAP///////////
     map<int,string>m;
     m[1]="apple";
     m[2]="banana";
     m.insert({3,mango})
     cout<<"\nmap elements:\n";
     for(auto pair:m)
     cout<<pair.first<<"=>"<<pair.second<<endl;
    m.erase(2);  //remove key 2
    cout<<"\nafter erasing key 2:/n";
    for(auto pair:m)
    cout<<pair.first<<"=>"<<pair.second<<endl;
    cout<<"map size:"<<m.size()<<"/n";
    cout<<(m.find(3) != m.end() ?"key 3 found\n" : "key 3 not found\n");
    return 0;



}