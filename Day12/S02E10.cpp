#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int n,x,k;
    cin>>n>>x>>k;
    int a[n];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    int b[n];
    for(int i=0; i<n; i++){
      cin>>b[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
      if((abs(b[i] - a[i])) <= k){
        count++;
      }
    }
    if(count>= x){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}