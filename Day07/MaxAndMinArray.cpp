#include <iostream>
//#include <climits>
using namespace std;
 
int main(){
  int i,n, array[n];
  cout<<"Enter the size of array ";
  cin>>n;

  cout<<"Enter the elements of array ";

  for(i = 0; i < n; i++){
    cin>>array[i];
  }

  int minNo = 0; //INT_MAX
  int maxNo = 0; //INT_MIN

  for(int i=0; i<n; i++){
    if (minNo > array[i]){
      minNo = array[i];
    }

    if(maxNo < array[i]){
      maxNo = array[i];
    }
  }

  cout<<"Min No. is "<<minNo<<" and Max No. is "<<maxNo;

  return 0; 
}