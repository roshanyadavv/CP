#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        ll n,a,max=0;
        cin>>n>>a;
        ll sum = a;

        vector<ll> v;

        for(ll i=0; i<n; i++){
            ll b;
            cin>>b;
            sum = sum+b;
            if(sum>max)
               max = sum;
        }

        cout<<max<<endl;

    }
}