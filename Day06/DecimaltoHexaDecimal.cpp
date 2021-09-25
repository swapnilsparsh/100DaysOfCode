#include<bits/stdc++.h>
using namespace std;

string DecimaltoHexaDecimal(int n){
  int x = 1;
  string answer = "";

  while(x <= n){
    x = x* 16;
  }
  x = x/16;
  
  while(x>0){
    int lastDigit = n/x;
    n = n - (lastDigit * x);
    x = x/16;

    if (lastDigit <= 9){
      answer = answer + to_string(lastDigit); //Convert integer to string
    }
    else{
      char c = 'A' + lastDigit - 10;
      answer.push_back(c);
    }
  }
  return answer;
}

int32_t main(){
  int n;
  cin >> n;
  cout << DecimaltoHexaDecimal(n) <<endl;
}