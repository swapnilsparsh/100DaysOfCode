#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int array[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>array[i][j];
    }
  }

  cout<<"2d Array is \n";
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout<<array[i][j]<<" ";
    }
    cout<<"\n";
  }

  int x;
  cin>>x;
  cout<<"Searching and ";
  bool check = false;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(array[i][j] == x){
        cout<<"Element found \n";
        check = true;
      }
    }
  }
  if(check == false){
    cout<<"Element not found";
  }
  return 0;
}