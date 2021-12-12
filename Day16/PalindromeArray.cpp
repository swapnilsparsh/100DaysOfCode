#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  char array[n];
  cin >> array;

  bool check = true;
  for(int i=0;i<n;i++){
    if (array[i] != array[n-1-i]){
      check = false;
    }
  }

  if(check == true ){
    cout<<"Palindrome" ;
  }
  else{
    cout<<"Not a Palindrome";
  }
 return 0; 
}