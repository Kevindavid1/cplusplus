#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter the Aaphabet to find whether it is a vowel or a consonant :";
    cin>>alpha;
    if(alpha=='a'|alpha=='e'|alpha=='i'|alpha=='o'|alpha=='u'|alpha=='A'|alpha=='E'|alpha=='I'|alpha=='O'|alpha=='U'){
        cout<<" It is a vowel"<<endl;
    }else{cout<<" It is a consonant"<<endl;}
    return 0;

}