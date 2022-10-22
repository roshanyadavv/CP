#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int n,sum=0, m=0;
        cin>>n;

        vector<long long int> v;
        
        for(long long int i=0; i<n; i++){
            long long int a; 
            cin>>a;

            v.push_back(a);
        }

        sort(v.begin(), v.end());
        m = v[0];
        sum = m;
        
        
        for(long long int i=1; i<n; i++){

            long long int k = __gcd(m,v[i]);
            sum = sum + k;
            if( k < m){
                m = k; 
            }
            
        }


        
        cout<<m*n<<endl;
    }
}