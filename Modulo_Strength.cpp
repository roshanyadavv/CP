#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll n,k, c=0, m = 0, s=0, j=-1;
    cin>>n>>k;

    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        v.push_back(a%k);
        
    }
    sort(v.begin(), v.end());

    for(ll i=0; i<v.size(); i++){
        if(v[i] != v[i-1] ){
            m = c;
            s = s + m*(i-1-j);
            c = 1;
            j = i;

        }

        else if( i == n-1){
            c++;
            m = c;
            s = s + m*(i-j);
        }
        else
           c++;
    }cout<<s<<endl;
}