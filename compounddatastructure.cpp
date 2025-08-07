// 1) struct
// #include<iostream>
// using namespace std;
// struct person{
//     string name;
//     int age;
// };
// int main(){
//     person p1;
//     p1.name="Alice";
//     p1.age=25;
//     cout<<p1.name<<" is "<<p1.age<<" year old "<<endl;
// }


//2) union
// #include<iostream>
// using namespace std;
// union data{   
//     int i;
//     float f;
//     char c;
// };
// int main(){
//     data d;
//     d.i=10;
//     cout<<"i:"<<d.i<<endl;
//     d.f=3.14;
//     cout<<"f:"<<d.f<<endl;
//     d.c='A';
//     cout<<"c:"<<d.c<<endl;
//     //only last written value is valid
//     cout<<"i after c"<<d.i<<endl;
// }


//3)enum(enumeration)
// #include<iostream>
// using namespace std;
// enum color{
//     blue,red,green
// };
// int main(){
//     color c = green;
//     cout<< c;
//     if (c == green){
//         cout<<" colour is green "<<endl;
//     }
// }

//3)typedef
// #include<iostream>
// using namespace std;
// typedef unsigned int uint;
// int main(){
//     uint age=30;
//     cout<<"Age: "<<age<<endl;}
//another
#include<iostream>
using namespace std;
typedef unsigned int age;
int main(){

    age personage = 25;
    cout<<"Age of the person is "<<personage<<endl;
    
}