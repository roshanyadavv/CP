#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll x;
        cin>>x;

        if(x%4 == 0)
           cout<<x+3<<endl;

        else if(x%4 == 2 || x%4 ==3)
           cout<<"3"<<endl;
           
    
        else if(x%4 ==1)
           cout<<x<<endl;
        
    }
    return 0;
}