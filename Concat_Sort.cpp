#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    long long int t;
    cin>>t;

    while(t--){

        long long int n, k=0,m=0;
        cin>>n;

        vector<long long int> v;
        vector<ll> v1;
        vector<ll> v2;

        for(long long int i=0; i<n; i++){
              long long int a;
              cin>>a;
              v.push_back(a);
        }
        k = v[0];

        for(ll i=0; i<n; i++){
            
            if(v[i] <= k){
                v2.push_back(v1.back());
                v1.pop_back();
                v1.push_back(v[i]);
                k = v[i];
            }
            
            else{
                v2.push_back(v[i]);
            }
        }

        for(ll i=1; i<v2.size(); i++){
            if(v2[i] < v2[i-1]){
                m=1;
                break;
            }
        }

        if(m == 1){
            cout<<"NO"<<endl;
        }

        else{
            cout<<"YES"<<endl;
        }
        

    }
}