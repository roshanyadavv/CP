#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n,x,count=0;
        cin>>n>>x;

        vector<ll> v;

        for(ll i=0; i<n; i++){
           int a;
           cin>>a;
           v.push_back(a);

        }

        for(ll i=0; i<n; i++){
           if(v[i] < x){
             count = i+1;
           }
           
        }

        cout<<count<<endl;
    }
}