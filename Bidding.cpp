#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

        if(a>b && a>c)
           cout<<"Alice"<<endl;
        
        else if(b>c && b>a)
           cout<<"Bob"<<endl;

        else 
           cout<<"Charlie"<<endl;

    }
}