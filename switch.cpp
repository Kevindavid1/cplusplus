#include<iostream>
using namespace std;
int main() 
{
float percent;
int x;
cout<<"Enter your percentage:";
cin>> percent;
cout<<"You scored "<<percent<<"%"<<endl;
x = percent/10;
switch(x)
{
    case 10:
    case 9:
    case 8:
    cout<<"Your rank grade is A"<<endl;
    break;
    case 7:
    case 6:
    cout<<"Your rank grade is B"<<endl;
    break;
    case 5:
    cout<<"Your rank grade is C"<<endl;
    break;
    case 4:
    cout<<"Your rankgrade is D"<<endl;
    break;
    default:
    cout<<"SORRY:You have Failed"<<endl;
}
    return 0;
}