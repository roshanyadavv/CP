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

        for(int i=0; i<n; i++){
            ll a;
            cin>>a;

            v.push_back(a);
        }

        for(int i=0; i<n; i++){
            
            if(v[i]%2 == 0)
              count++;
            
            else
              count1++;
        }
   //     cout<<count1<<count;
        if(count == 0 || count1 == 0){
            cout<<"0"<<endl;
        }
        else if(count ==1){
            cout<<count<<endl;
        }
        else if(count1 == 1){
            cout<<count<<endl;
        }
        
        else{
            if(count1%2 ==0)
               cout<<min(count, count1/2)<<endl;
            
            else
               cout<<count<<endl;
        }

    }
}