#include<iostream>
using namespace std;
int main(){
  int maximum = -1.999999;
  int n;
  cin>>n;

  int array[n];
  for(int i=0; i<n; i++){
    cin>>array[i];
  }

  for(int i=0;i<n;i++){
    maximum = max(maximum, array[i]);
    cout<<maximum<<endl;
  }

  return 0;
}