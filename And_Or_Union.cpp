#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      ll n, count=0;
      cin>>n;

      vector<long long int> v;
      vector<long long int> v1;

      for(ll i=0; i<n; i++){

          ll a;
          cin>>a;
          v.push_back(a);

      }

      for(ll i=0; i<n; i++){
          for(ll j=i+1; j<n; j++){
             
             v1.push_back(v[i]&v[j]);

          }
      }
      
      ll temp=0;
      
      if(v1.size()>1){
      for(int i=0; i<n; i++){
 
        temp = temp | v1[i];
      }
      cout<<temp<<endl;
      }

      else 
        cout<<v1[0]<<endl;

    }
}