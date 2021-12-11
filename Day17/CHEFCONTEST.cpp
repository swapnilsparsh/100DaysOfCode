#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int x,y,p,q,chef,chefina;
    cin>>x>>y>>p>>q;
    chef = x + p*10;
    chefina = y + q*10;
    if(chef<chefina){
      cout<<"Chef\n";
    }
    else if (chef>chefina){
      cout<<"Chefina\n";
    }
    else{
      cout<<"Draw\n";
    }
  }
  return 0;
}