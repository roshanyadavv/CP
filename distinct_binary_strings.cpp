#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
     ll n,count=0;
     cin>>n;

     string s;
     cin>>s;
     
     unordered_map<string,ll> mp;

     for(ll i=0; i<n; i++){

        if(s[i]!=s[i-1])
          count++;

     }

     cout<<count<<endl;
  

    }
}