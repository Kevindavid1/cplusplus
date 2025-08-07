#include<iostream>
using namespace std;
int main(){
    int num=1;
    start://label
    cout<<num<<" ";
    num++;
    if(num<=5)
    goto start;//jumps back to label
return 0;
}
