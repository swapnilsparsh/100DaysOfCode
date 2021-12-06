#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;

  for(int i=0; i<t; i++){
    int n,m;
    cin>>n>>m;
    string s = "";
    if(n > m){
      while(n>0 && m>0){
        s = s + "01";
        n--;
        m--;
      }
      while(n!=0){
        s = s + "010";
        n--;
      }
    }

    else if(n < m){
      while(n>0 && m>0){
        s = s + "10";
        n--;
        m--;
      }
      while(m!=0){
        s = s+"101";
        m--;
      }
    }
    else if(n == m){
      while(n>=0 && m>=0){
        s = s + "01";
        n--;
        m--;
      }
    }
    cout<<s.size()<<endl;
    cout<<s<<endl;
    }
  return 0;
}