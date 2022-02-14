#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
        int n,count1=0,count0=0 ;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            if(s[i] == '1')
               count1++;
            
            else
               count0++;
        }
        
        if(n%2 == 0){
        if( count0 == n || count1 == n)
           cout<<"YES"<<endl;

        else if( count1%2 ==0 ||count0%2 == 0) 
           cout<<"YES"<<endl;
        
        else if( count0 == count1)
            cout<<"YES"<<endl;
        
        else 
           cout<<"NO"<<endl;
        }

        else
           cout<<"YES"<<endl;

	}
	return 0;
}