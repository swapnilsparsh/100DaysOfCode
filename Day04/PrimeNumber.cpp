#include<iostream>
using namespace std;
int main(){
  int i, num;
  bool j = 0;   // Using it to check wether the for loop is run completely or it stop the loop due to break.
  cout<<"Enter a number ";
  cin>>num;
  for(i = 2 ; i <= num-1 ; i++){
    if(num % i == 0){                         
      cout<<"Not a prime number"<<endl;
      j = 1;
      break;
    }
  }
  if ( j == 0){
    cout<<"Prime Number"<<endl;
  }
  return 0;
}