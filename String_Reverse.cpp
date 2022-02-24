#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

     string s;
     cin>>s;
     
     ll a = s.size(), count=0;
     for(ll i=0; i<(s.size())/2; i++){
        
        if(s[i]!=s[a-1])
          count++;
        
        a = a-1;
     }
     
     if(s.size()%2 == 0 && count*2 == s.size())
     cout<<count*2-1<<endl;

     else
       cout<<count*2+1<<endl;
  

    }
}