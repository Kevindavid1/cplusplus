//abstraction is the process of hiding implementation details and show only the essentials
#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;//pure virtual function->makes class adstraction
};
 class circle :public shape{
    public:
    void draw(){
        cout<<"drawing circle"<<endl;
    }
 };
 int main(){
    //shap s;             ERROR; can not create object of abstract class
    circle c;             //ok:derived class implemented all functions
    c.draw();
 }