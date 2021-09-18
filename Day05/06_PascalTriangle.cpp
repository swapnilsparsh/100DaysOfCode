// Based on Binary Coefficient
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include<iostream>
using namespace std;

int fact (int n){
  int factorial = 1;
  for(int i=2;i<=n;i++){
    factorial = factorial*i;
  }

  return factorial;
}

int main(){
  int num;
  cout<<"Enter  number: ";
  cin>>num;
  for (int i = 0; i< num; i++){
    for(int j = 0; j<= i; j++){
      cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
      }
    cout<<endl;
  } 
}