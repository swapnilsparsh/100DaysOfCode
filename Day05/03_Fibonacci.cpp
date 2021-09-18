#include<iostream>
using namespace std;

void fib(int num){
  int num1 = 0;
  int num2 = 1;
  int nextnum;
  for(int i=1 ; i<= num; i++){
    cout<<num1<<endl;
    nextnum = num1+num2;
    num1 = num2;
    num2 = nextnum;
  }
  return;
}

int main(){
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  fib(num);
  return 0;
}