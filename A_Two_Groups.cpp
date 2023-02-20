#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        long long int n, sum=0;
        cin>>n;

        vector<long long int> v;

        for(long long int i=0; i<n; i++){
            long long int a;
            cin>>a;
            v.push_back(a);
            sum += a;
        }

        cout<<abs(sum)<<endl;
    }
    
}