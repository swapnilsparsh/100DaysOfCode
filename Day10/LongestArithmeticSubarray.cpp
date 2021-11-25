#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;

  int array[n];
  for(int i=0; i<n; i++){
    cin>>array[i];
  }

  int answer = 2;
  int d = array[1]-array[0];
  int j = 2;
  int current = 2;
  while(j<n){
    if(array[j]-array[j-1] == d)
      current++;
    else{
      d = array[j]-array[j-1];
      current=2;
    }
    answer=max(answer,current);
    j++;
  }
  cout<< answer << endl;
  return 0;
}