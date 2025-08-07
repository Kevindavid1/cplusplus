#include<iostream>
using namespace std;
int main(){
    int evencount=0;
    int oddcount=0;
    int j;
    cout<<"Enter till what number:";
    cin>>j;
    for( int i=0;i<j;i++){
        if(i/2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
      cout<<evencount<<endl;
      cout<<oddcount<<endl;
    return 0;
}