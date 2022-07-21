#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n,m;
        cin>>n>>m;

        vector<ll> v;
        string s(m, 'B');

        for(ll i=0; i<n; i++){
            ll a;
            cin>>a;

            v.push_back(a);
        }
      //  sort(v.begin(), v.end());

        for(ll i=0; i<n; i++){
            
            if(i == 0){
                if( (m-v[i]) < v[i]-1)
                   s[m-v[i]] = 'A';
                
                else
                   s[v[i]-1] = 'A';
            }
               
            else if( (m-v[i]) < v[i]-1 && s[m-v[i]] != 'A')
                s[m-v[i]] = 'A';
            
            else if( (m-v[i]) < v[i]-1 && s[m-v[i]] == 'A' )
                s[v[i]-1] = 'A'; 
            

            else if(s[v[i]-1] == 'A' && (m+1-v[i]) <=m ){
                s[m-v[i]] = 'A';
            }

            else{
                s[v[i]-1] = 'A';
            }
        }

        cout<<s<<endl;
    }
}

