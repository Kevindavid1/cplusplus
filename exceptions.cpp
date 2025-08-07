//try-throw-catch
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10,b=0;
//     try{
//         if(b==0)
//         throw"division by zero is not allowed";
//     int result =a/b;
//     cout<<"result:"<<result<<endl;
//     }catch(const char*msg){
//         cout<<"exception caught: "<<msg<<endl;
//     }return 0;
// }


//std exceptions
// #include<iostream>
// #include<stdexcept>
// using namespace std;
// int main(){
//     try{
//         throw runtime_error("runtime error occured");
//     }catch(const exception& e){
//         cout<<"caught:"<<e.what()<<endl;
//     }return 0;
// }


//userdefined exception
// #include<iostream>
// #include<exception>
// using namespace std;
// class invalidageexception : public exception{
//     public:
//     const char* what()const noexcept override{
//         return"age cannot be negative";
//     }
// };
// int main(){
//     int age;
//     cout<<"enter your age:";
//     cin>>age;
//     try{
//         if(age<0){
//             throw invalidageexception();
//     }
//     cout<<"your age is:"<<age<<endl;

// }catch(const invalidageexception& e){
//     cout<<"caught exception:"<<e.what()<<endl;
// }return 0;
// }


//catch by reference
// #include<iostream>
// #include<stdexcept>
// using namespace std;
// int main(){
//     try{
//         throw logic_error("logic error occured");
//     }catch(const logic_error& e){
//        cout<<"caught by reference:"<<e.what()<<endl;
// }return 0;
// }

//dynamic memory
#include<iostream>
#include<new>
using namespace std;
int main(){
    try{
        int* arr=new int[10000000000000];

    }catch(const bad_alloc& e){
        cout<<"memory allocation failed"<<e.what()<<endl;
    }return 0;
}