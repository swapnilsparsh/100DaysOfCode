#include<iostream>
#include<math.h>
using namespace std;

bool prime(int num){
  for (int i = 2; i<=num; i++){
    if (num%2 == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  for (int i=a;i<= b;i++){
    if(prime(i)){
      cout<<i<<endl;
    }
  }
  return 0;
}