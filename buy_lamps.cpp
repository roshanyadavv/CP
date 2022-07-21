#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,k,x,y;
        cin>>n>>k>>x>>y;

        cout<< (x*k) + (min(x,y)*(n-k))<<endl;
    }
}