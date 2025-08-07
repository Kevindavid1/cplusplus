#include<iostream>
using namespace std;
class demo{
    private:
    int a,b;

    public:
    //constructor
    demo(int x,int y){
        a=x;
        b=y;
    }
    //1.simple member function
    void add(){
        cout<<"sum:"<<(a+b)<<endl;
    }
    //2.const  member function
    void showvalue()const{
        cout<<"values->a:"<<a<<"b:"<<b<<endl;
    }
    //3.inline member functions
    inline void multiply(){
        cout<<"product:"<<(a*b)<<endl;
    }
    //4.static member functions
    static void greetings(){
        cout<<"hello from stativ member function (no object)."<<endl;
    }
    //5.friend member function
    friend void subtract(demo d);

};
//5.friend function definition
void subtract(demo d){
    cout<<"difference:"<<(d.a-d.b)<<endl;
}
int main(){
    demo obj(10,4);
    obj.add();//simple member function
    obj.showvalue();//const member function
    demo::greetings();//inline member function
    obj.multiply();//static member function
    subtract(obj);//friend member function
    return 0;
}