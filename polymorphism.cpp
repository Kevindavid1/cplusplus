#include<iostream>
using namespace std;
class number{
    public:
    int value;
    number(int v){
        value=v;
    }
    //overload operator
    number operator + (number obj){
        return number (value + obj.value);
    }
    void display(){
        cout<<"result:"<<value<<endl;
    }

};
int main(){
    number n1(5);
     number n2(10);
      number n3=n1+n2;
      n3.display();
      return 0;
}