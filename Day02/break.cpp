#include<iostream>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter the number: ";
  cin>>n;
  for(i=2; i<=n ; i++){
    if(n%i == 0){
      cout<<"Not a prime number"<<endl;
      break;
    }
  }
  if(i == n){
    cout<<"It is a prime number";
  }
  return 0;
}