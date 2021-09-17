#include<iostream>
using namespace std;
int main(){
  int num, reverse = 0;
  cout<<"Enter a number: ";
  cin>>num;
  while(num>0){
    int lastdigit = num%10; //Divide any number with 10, remainder you get will be the last number
    reverse = reverse*10 + lastdigit; //Multiply with 10
    num = num/10; //Divide any number with 10 you will get in decimal but num is int so it will ignore the decimal.  
  }
  cout<<reverse<<endl;
  return 0;
}