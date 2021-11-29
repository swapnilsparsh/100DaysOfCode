#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t; i++){
    int n;
    cin>>n;
    if(n<21){
      cout<<("NO\n");
    }
    else{
        cout<<"YES\n";
    }
  }

  return 0;
}