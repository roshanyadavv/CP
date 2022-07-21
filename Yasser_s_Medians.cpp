#include<bits/stdc++.h>
using namespace std;

int main(){

    

        long long int n,k, sum=0, s=0;
        cin>>n>>k;

        vector< long long int> v;
        
        for(int i=0; i<n; i++){
            long long a;
            cin>>a;
            v.push_back(a);
        }
        
        sort(v.begin(), v.end());
        
        if((n-k)%2 != 0){
            s = v[n-1-k+(k/2)];
        }

        else{
             s = (v[n-1-k+(k/2)] + v[n-k+(k/2)] )/2;
        }
        
        sum = pow(n,s);
        sum = sum%1000000007;

        cout<<sum<<endl;
    
}