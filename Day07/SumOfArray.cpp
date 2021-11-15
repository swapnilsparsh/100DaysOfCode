#include<iostream>
using namespace std;
int main(){
  int n, array[n], sum;
  cout<<"Enter the size of array "<<endl;
  cin>>n;
  cout<<"Enter the elements of array ";
  for(int i=0; i<n; i++){
    cin>>array[i];
  }
  
  sum = 0;
  for(int i=0; i<=n; i++){
    sum = sum + i;
  }

  cout<<"The sum of array is "<<sum;
  return 0;
}