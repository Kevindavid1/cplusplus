#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>myset={10,20,30,40};
    for(auto it=myset.begin(); it !=myset.end();++it){
    cout<<*it<<"";}
    return 0;

}