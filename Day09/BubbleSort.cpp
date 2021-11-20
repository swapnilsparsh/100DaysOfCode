#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array: ";
  cin>>n;

  int array[n];
  cout<<"Enter the elements of array: ";
  for(int i=0; i<n; i++){
    cin>>array[i];
  }
  

  for(int i=0;i<n;i++){
    for(int j=0; j<n-i; j++){
      if(array[j]>array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }

  for(int i=0; i<n; i++){
    cout<<array[i];
  }
}