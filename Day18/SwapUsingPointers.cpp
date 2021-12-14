#include<iostream>
using namespace std;

void swaping(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int a = 2;
  int b = 4;

  cout<<"Before Swapping "<<a<<" "<<b<<endl;
  swaping(&a, &b);
  cout<<"After Swapping "<<a<<" "<<b<<endl;
  return 0;
}