#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int n, sum=0;
        cin>>n;

        vector< long long int> v;
        
        for(int i=0; i<n; i++){
            long long a;
            cin>>a;
            v.push_back(a);
        }

        for(long long  i=0; i<n-1; i++){
            for(long long j=i+1; j<n; j++){

                if( min(v[i], v[j]) <= (v[i] ^ v[j])){
                    sum++;
                 //   cout<<min(v[i], v[j])<<" "<<(v[i]^v[j])<<" ";
                }
            }
        }
     //   cout<<endl;

        cout<<sum<<endl;
    }
}