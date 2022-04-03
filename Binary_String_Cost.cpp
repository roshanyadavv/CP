#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        int n,x,y,count =0;
        cin>>n>>x>>y;

        string s;
        cin>>s;

        for(int i=1; i<s.size(); i++){
            if(s[i] != s[i-1])
               count++;
        }

        if(count == 0)
           cout<<"0"<<endl;
        
        else
           cout<<min(x,y)<<endl;
         
    }
}