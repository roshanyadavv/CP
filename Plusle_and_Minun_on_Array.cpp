#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,count=0;
        cin>>n;

        bool boo = true;

        vector<ll> vodd;
        vector<ll> veven;
        vector<ll> vsum;

        for(int i=0; i<n; i++){
            ll a;
            cin>>a;
            
            if(i == n-1 && n%2 != 0)
              count = a;
            
            else if(i == 0 || i%2 == 0)
               veven.push_back(abs(a));
            
            else{
               vodd.push_back(abs(a));
            }
        }

        ll min = *min_element(veven.begin(), veven.end());
        ll max = *max_element(vodd.begin(), vodd.end());

        for(int i=0; i<n/2; i++){
            if( vodd[i] == max)
               vsum.push_back(veven[i] - vodd[i]);
            
            else
               vsum.push_back(999999999999);
        }

        ll minsum = *min_element(vsum.begin(), vsum.end());

        
        for(int i=0; i<n/2; i++){

              count = count + veven[i] - vodd[i];
               
        }

        count = count + 2*(max - min);

        cout<<count<<endl;
    }
}