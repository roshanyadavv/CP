#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,k,l;
        cin>>n>>k>>l;

        if(n/3 >= 0){
            if(n%3 != 0)
              l = ((n/3)) * l;
            
            else
              l = ((n/3)-1)*l;
        }

        cout<<n*k+l<<endl;

    }
}