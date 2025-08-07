#include<iostream>
using namespace std;
int main(){
    int num[8] = {20, 22, 18, 35, 48, 26, 87, 70};

  float avg, sum = 0;
  int i;

  int length = sizeof(num) / sizeof(num[0]);

  for (int n : num) {
    sum += n;
  }
  

  avg = sum / length;

  cout << "The average of these numbers  is: " << avg << endl;
  cout<<"The sum of these numbers is:"<<sum<<endl;
    return 0;
}