#include<iostream>
using namespace std;

int fact(int n){
  int factorial = 1;
  for(int i=2; i<=n; i++){
    factorial = factorial*i;
  }
  return factorial;
}

int main(){
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  int result = fact(num);
  cout<<result<<endl;
  return 0;
}