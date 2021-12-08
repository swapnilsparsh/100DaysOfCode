#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int x;
  cin>>x;

  int array[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>array[i][j];
    }
  }

  int r = 0, c = m-1;
  bool count = false;
  while(r < n && c >= 0){
    if(array[r][c] ==x ){
    count = true;
    }
    if(array[r][c] > x){
      c--;
    }
    else{
      r++;
    }
  }

  if(count == true){
    cout<<"Found";
  }
  else{
    cout<<"Not Found";
  }

  return  0;
}