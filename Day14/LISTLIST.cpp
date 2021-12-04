#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }

    int m = 1;
        int c = 1;
        sort(a,a+n);
        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i-1])
            {
                c++;
                m = max(m, c);
            }
            else{
                c=1;
            }
        }
        if(n==m){
            cout<<0<<endl;
            continue;
        }
        if(m==1){
            cout<<-1<<endl;
            continue;
        }
        cout<<(n-m)+1<<endl;
  }
  return 0;
}