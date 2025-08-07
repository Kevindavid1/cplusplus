//same function butb different parameters
#include<iostream>
using namespace std;
class print{
    public:
    void show(int a){
        cout<<"integer:"<<a<<endl;
    }
    void show(double d){
        cout<<"double:"<<d<<endl;
    }
    void show(string s){
        cout<<"string:"<<s<<endl;
    }
};
int main(){
    print p;
    p.show(10);
    p.show(3.14);
    p.show("hello");
    return 0;
}