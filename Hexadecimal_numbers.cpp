#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

vector<ll> hex;

int dectohex(ll low, ll high){
    for(ll i=low; i<=high; i++){
        
        if(i == low){
            int a=0;
            while(i>0){
                if(i>=16){
                    a = a*10 + i/16;
                }
                else{
                    a = 
                }
            }
        }
        else if(i%16 == 0){
            v.push_back((i/16)*10);
        }
        else{
            v.push_back(hex.back()+1)}
    }

}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll low,high;
        cin>>low>>high;


    }
}