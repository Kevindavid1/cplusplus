//this allow  you to allowcar memory during runtime using new and delocates it using delete
#include<iostream>
using namespace std;
int main(){
    //dynamically allowcating memory for a single integer
    int* ptr = new int;
    *ptr =25;//assinging value to the dynamically allocated memory
    cout<<"value stored at str:"<<*ptr<<endl;//deferncing pointer to get value

    //dynamically allocating memory for an array of 5 integer
    int* arr = new int[5];
    for(int i=0;i<5;i++){
        arr[i]=i*10; //assign values to the array
    }
    //printing values stored in the array
    cout<<"values in dynamicallyallocated array:"<<endl;
    for(int i=0;i<5;i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
delete ptr;//free the memory for the single integer
delete[]arr;//free the memory for an array
return 0;
}