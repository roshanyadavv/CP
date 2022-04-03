#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n,k;
        cin>>n>>k;

        vector<ll> v;

        for(ll i=0; i<n;i++){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        cout<<v[min(k, n-1)] <<endl;

    }
}