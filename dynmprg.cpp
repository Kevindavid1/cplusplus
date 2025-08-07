#include<iostream>
#include"dyn.h"
using namespace std;
int main(){
    cout<<"sum:"<<add(14,7)<<endl;

    cout<<"product:"<<mul(5,7)<<endl;
}


//for static library

// compile the implimentation ====>  g++ -c sli.cpp
// create static library from the object file ===>   ar rcs libsli.a sli.o
// create ===>  g++ stlmprg.cpp -L. -lsli -o app
//  ./app







//for dynamic library

// g++ -fPIC -c dli.cpp
//  g++ -shared -o libdli.so dli.o
//  export LD_LIBRARY_PATH=.
//  g++ dynmprg.cpp -L. -ldli -o otp
// ./otp