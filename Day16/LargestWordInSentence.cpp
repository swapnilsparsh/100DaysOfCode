#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  cin.ignore();
  char array[n+1];
  
  cin.getline(array, n);
  cin.ignore();

  int i=0;
  int currLen=0, maxLen=0;
  while(1){
    if(array[i] == ' ' || array[i] == '\0'){
      if(currLen > maxLen){
        maxLen = currLen;
      }
      currLen = 0;
    }
    else
    currLen++;
    if(array[i] == '\0'){
      break;
    }
    i++;
  }

  cout<<maxLen;

  return 0; 
}