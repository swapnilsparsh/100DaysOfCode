//Brute Force
#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;

  int array[n][m];
  for(int i=0;i<n;i++){
    for(int j=0; j<m;j++){
      cin>>array[i][j];
    }
  }

  int x;
  cin>>x;
  int count = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(array[i][j] ==x) {
        count++;
      }
    }
  }

  if(count > 0){
    cout<<"Found";
  }
  else{
    cout<<"Not Found";
  }
  return 0;
}