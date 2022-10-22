#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int n,m;
        cin>>n>>m;

        if(n == 1 && m == 1){
            cout<<"Tonya"<<endl;
        }

        else{
            if( ( (n-1) + (m-1) )%2 == 0 )
              cout<<"Tonya"<<endl;
            
            else
              cout<<"Burenka"<<endl;
        }
    }
}