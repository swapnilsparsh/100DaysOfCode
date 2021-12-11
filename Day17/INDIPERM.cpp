#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int n;
    cin>>n;
    if(n == 2){
      cout<<2<<" "<<1<<endl;
    }
    else{
      cout<<1<<" ";
      for(int j=3; j<n+1;j++){
        cout<<j<<" ";
      }
      cout<<2<<endl;
    }
  }
  return 0;
}