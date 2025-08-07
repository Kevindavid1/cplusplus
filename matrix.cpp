#include<iostream>
using namespace std;
int main(){
    int num[2][4]={
        {1,2,3,4},
        {0,9,8,7}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<num[i][j]<<endl;
         
        }
    }
     return 0;
}