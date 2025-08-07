#include<iostream>
using namespace std;
void printvalue(int &x){//for lvalue
    cout<<"lvalue reference:"<<x<<endl;
}
void printvalue(int &&x){// for rvalue
    cout<<"rvalue reference:"<<x<<endl;
}
int main(){
    int a = 50;
    printvalue(a);//lvalue version
    printvalue(100);//rvalue version
}