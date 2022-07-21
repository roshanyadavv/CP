#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll t;

    cin>>t;

    while(t--){

        ll a,b,n, shyam=0, raghu=0,s=0,r=0;
        cin>>a>>b>>n;

        vector<ll> v;
        
        for(ll i=0; i<n; i++){
            ll c;
            cin>>c;

            v.push_back(c);
        }

        sort(v.begin(), v.end());

        for(ll i=0;i<n; i++){
         
            
          //  raghu += v[i];

            if(shyam + v[i] <=a){
               shyam += v[i];
               s++;
            }

            if(raghu+ v[i] <= b){
                raghu +=v[i];
                r++;
            }
        }

        if(r == s)
           cout<<"Tie"<<endl;
        
        else if(r>s)
           cout<<"Sayan Won"<<endl;
        
        else 
           cout<<"Raghu Won"<<endl;
    }
    
}