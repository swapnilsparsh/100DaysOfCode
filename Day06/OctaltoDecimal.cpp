#include<bits/stdc++.h>
using namespace std;

int OctaltoDecimal(int n){
  int answer = 0;
  int x = 1;
  while (n >0){
    int y = n%10; //To get the last digit
    answer = answer + (x*y); //
    x = x*8; //Octal to Decimal uses 8 as a multiplier
    n = n/10; //To get the second digit, decimal will be neglected
  }
  return answer;
}

int32_t main(){
  int n;
  cin >> n;
  cout << OctaltoDecimal(n) <<endl; 
}