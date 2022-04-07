#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        int n,count1=0, count=0,ans =0;
        cin>>n;
        
        vector<ll> v;
        vector<ll> v1;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            ans += max(v[i]^v1[j], v[i]&v1[j]);
            }
      //      ans += max(v[i]^v1[i], v[i]&v1[i]);
        }
        cout<<ans<<endl;
    }
}