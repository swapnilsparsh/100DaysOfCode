#include<bits/stdc++.h>
using namespace std;

int DecimaltoBinary(int n){
  int x = 1;
  int answer = 0;

  while(x <= n){
    x = x* 2;
  }
  x = x/2;
  
  while(x>0){
    int lastDigit = n/x;
    n = n - (lastDigit * x);
    x = x/2;
    answer = answer * 10 + lastDigit;
  }

  return answer;
}

int32_t main(){
  int n;
  cin >> n;
  cout << DecimaltoBinary(n) <<endl;
}