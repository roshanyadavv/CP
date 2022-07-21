#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin>>t;

    while(t--){

        long long n,count=0;
        cin>>n;

        vector<long long> v;

        for(long long i=0; i<n; i++){

            long long a;
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        long long size =n;

        for(long long i=0; i<n; i++){
            if(v[i] <= size-1){
              count++;
              size--;
            }
        }

        cout<<count<<endl;
        

    }
}