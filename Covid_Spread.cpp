#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
     
     ll n, days, count=1;
     cin>>n>>days;
     
     for(ll i=1; i<=days; i++){
     if(i<=10){
        count*=2;
        if(count>n){
            count = n;
            break;
        }
     }
     
     else{
         count*=3;
         
         if(count>n){
            count = n;
            break;
        }

         }
     }
     cout<<count<<endl;
    }
}