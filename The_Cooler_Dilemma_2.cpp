#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        int x,y;
        cin>>x>>y;

        if(y%x == 0)
          cout<<y/x - 1<<endl;

        else
           cout<<y/x<<endl;
    }
}