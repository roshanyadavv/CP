#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){

    int t; cin>>t;

    while(t--){

        ll n,k;
        cin>>n>>k;

        ll a[n];

        for(int i=0; i<k; i++){
            cin>>a[i];
        }        
        
        for(int i=1; i<=n; i++){
            if(i<n)
            cout<<i<<" ";

            else
            cout<<i;
        }
        cout<<endl;
    }
}