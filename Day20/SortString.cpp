#include<iostream>
#include<string>
//Include this header file for sorting
#include<algorithm>
using namespace std;
int main(){
  string s1 = "swapnil";
  sort(s1.begin(), s1.end());
  cout<< s1 <<endl;
  return 0;
}