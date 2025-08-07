#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter then a number:";
    cin>>n;
    if(n>0){
        cout<<"Postive"<<endl;}
    else if(n<0){
        cout<<"Negative"<<endl;
    } 
    else{
        cout<<"invalid number"<<endl;
    }   
    
    return 0;
}