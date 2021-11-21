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

  for(int i=1; i<n; i++){
    int counter = array[i];
    int j = i-1;
    while(array[j]>counter && j>=0){
      array[j+1]=array[j];
      j--;
    }
    array[j+1]=counter;
  }

  for(int i=0; i<n; i++){
    cout<<array[i];
  }

  return 0;
}