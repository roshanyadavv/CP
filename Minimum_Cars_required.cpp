#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        
        if(n%4 != 0)
           cout<<n/4+1<<endl;
        
        else
           cout<<n/4<<endl;
    }
}