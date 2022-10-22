#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, k=10, ans =0;
        cin>>n;

        vector<int> v;

        for(int i=0; i<n; i++){
            int p;
            cin>>p;

            v.push_back(p);
        }

        k -= n;

        for(int i=1; i<k; i++){
           ans += i*6;
        }

        cout<<ans<<endl;
    }
}