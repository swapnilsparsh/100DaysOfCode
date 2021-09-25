#include<bits/stdc++.h>
using namespace std;

int DecimaltoOctal(int n){
  int x = 1;
  int answer = 0;

  while(x <= n){
    x = x* 8;
  }
  x = x/8;
  
  while(x>0){
    int lastDigit = n/x;
    n = n - (lastDigit * x);
    x = x/8;
    answer = answer * 10 + lastDigit;
  }

  return answer;
}

int32_t main(){
  int n;
  cin >> n;
  cout << DecimaltoOctal(n) <<endl;
}