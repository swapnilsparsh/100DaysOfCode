#include<iostream>
using namespace std;

int fact(int num){
  int factorial = 1;
  for(int i=2; i<= num; i++){
    factorial = factorial*i;
  }
  return factorial;
}

int main(){
  int n, r;
  cout<<"Enter n and r: ";
  cin>>n>>r;
  int answer = fact(n)/(fact(n-r)*fact(r));
  cout<<answer<<endl;
  return 0;
}