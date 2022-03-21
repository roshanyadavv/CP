#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n,x,k;
        cin>>n>>x>>k;

        if(k/x <= n)
          cout<<k/x<<endl;

        else
          cout<<n<<endl;

    }
}