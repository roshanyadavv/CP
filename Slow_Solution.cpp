#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,c,ans=0;
        cin>>a>>b>>c;
        
        if(a > c/b)
        ans = (min(c/b, a)*b*b) + ((c%b)*(c%b));

        else
        ans = (min(c/b, a)*b*b);


        cout<<ans<<endl;

    }
}