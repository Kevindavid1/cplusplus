#include<iostream>
using namespace std;
int main(){
    string empname;
    cout<< "Enter the name of the employee:";
    cin >>empname;
    int age;
    cout<<"Enter the age of the employee:";
    cin>>age;
    string dob;
    cout<<"Entre the date of birth of the employee:";
    cin>>dob;
    int salary;
    cout<<"Enter the salary of the employee:";
    cin>>salary;
    int quatersalary=salary*6;
    cout<<"the quater salary is "<<quatersalary<<endl;
     int annualsalary=salary*12;
     cout<<"the annual salary is "<<annualsalary<<endl<<endl;
     cout<<"DETAILS OF THE EMPOLYEE....."<<endl<<endl;
     cout<<"NAME:"<<empname<<endl;
     cout<<"Age of the employee :"<<age<<endl; 
      cout<<"Date of birth of the employee:"<<dob<<endl;
      cout<<"Salary of the employee:"<<salary<<endl;
       cout<<"Quater salry of the employee:"<<quatersalary<<endl;
        cout<<"Annual salary of the employee:"<<annualsalary<<endl;
    return 0;
}