#include<iostream>
#include<string>
using namespace std;
int main(){
  string str1 = "Fam";
  string str2 = "ily";
  str1.append(str2);
  cout<<str1;
  // Normal adding two strings
  // string str3 = str1+str2;
  // cout<<str3; 
  return 0;
}