#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int num,lastdigit, sum = 0;
  cout<<"Enter a number: ";
  cin>>num;
  int original = num; //num is beign divided below and becomes 0
  while(num > 0){
    lastdigit = num%10;
    sum = sum + round(pow(lastdigit,3));
    num = num/10;
  }
  if (sum == original){
    cout<<"Armstrong Number"<<endl;
  }
  else{
    cout<<"Not a Armstrong Number"<<endl;
  }
  return 0;
}