#include<iostream>
using namespace std;
int main(){
  int n1,n2,n3;
  cin>>n1>>n2>>n3;

  int array1[n1][n2];
  for(int i=0; i<n1; i++){
    for(int j=0; j<n2;j++){
      cin>>array1[i][j];
    }
  }

  int array2[n2][n3];
  for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
      cin>>array2[i][j];
    }
  }

  int array3[n1][n3];
  for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
      array3[i][j]=0;
    }
  }


  for(int i=0; i<n1;i++){
    for(int j=0;j<n3;j++){
      for(int k=0;k<n2;k++){
        array3[i][j] += array1[i][k] * array2[k][j];
      }
    }
  }

  for(int i=0; i<n1; i++){
    for(int j=0; j<n3; j++){
      cout<<array3[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}