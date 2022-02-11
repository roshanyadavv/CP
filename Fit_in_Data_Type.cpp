#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a;
        cin>>n>>a;
        
          
        if(a<=n)
        cout<<a<<endl;

        else {
            while(a>n){
            a= a-n-1;}
                    cout<<a<<endl;

        }
	}
	return 0;
}
