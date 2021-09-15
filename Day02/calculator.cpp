#include<iostream>
using namespace std;
int main(){
  int num1, num2;
  char oper;
  cout<<"Enter the two numbers ";
  cin>>num1>>num2;
  cout<<"Enter operand: ";
  cin>>oper;
  switch(oper){
    case '+' : cout<<num1+num2<<endl;
    break;
    case '-' : cout<<num1-num2<<endl;
    break;
    case '*' : cout<<num1*num2<<endl;
    break;
    case '/' : cout<<num1/num2<<endl;
    break;
    default : cout<<"Invalid Operator"<<endl;
    break; 
  }
  return 0;
}