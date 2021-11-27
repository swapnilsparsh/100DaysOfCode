#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    int s,a,b,c;

    for (int i=0; i<t; i++){
        cin>>s>>a>>b>>c; 
        float f = s;
        f = f + f * c / 100.0;
        s = int(f);
        if (s>=a && s<=b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}