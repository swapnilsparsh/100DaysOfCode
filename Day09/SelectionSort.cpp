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

  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if(array[i]>array[j]){
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }
  
  for(int i=0; i<n ; i++){
    cout<<array[i];
  }
  return 0;
}