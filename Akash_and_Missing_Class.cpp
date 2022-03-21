#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n,count=0;
        cin>>n;
        
        if(n%7 == 6)
           count++;
        
        n = n/7;

        cout<<count+n<<endl;


    }
}