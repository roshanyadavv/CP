#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int gcd(ll x, ll y)
{
	return y == 0 ? x : gcd(y, x % y);
}

int main(){

    ll t;
    cin>>t;
    bool b = true;

    while(t--){

        ll a,b;
        cin>>a>>b;
        
        if(a%2 == 0){
          if(a+2 <=b)
             cout<<a<<" "<<a+2<<endl;
          else
             cout<<"-1"<<endl;
        }

        else{
          if( a%3 == 0){
            if(a+3 <= b)
              cout<<a<<" "<<a+3<<endl;
            else
              cout<<"-1"<<endl;
          }
        else{

          if(a+3<=b )
            cout<<a+1<<" "<<a+3<<endl;
          else
            cout<<"-1"<<endl;
        }
        }
    }
    return 0;
}