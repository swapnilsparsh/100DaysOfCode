#include <iostream>
using namespace std;


int test(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return test(b, a%b);
    }
}

int main() {
	int t;
	
	cin>>t;
	while(t--){
	    int n,k ;
	    cin>>n>>k;
	    int p = 0;
	    
	    int g = test(n,k);
	    p = n/g;
	    cout<<p<<endl;
	}
	
	return 0;
}
