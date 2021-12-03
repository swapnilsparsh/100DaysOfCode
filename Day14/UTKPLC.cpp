#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    char fi,se,th,x,y;
    cin>>fi>>se>>th>>x>>y;
    if(fi == x || fi == y ){
      cout<<fi<<endl;
    }
    else{
      cout<<se<<endl;
    }
  }
  return 0;
}