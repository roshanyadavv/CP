#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        double n;
        cin>>n;

        double m = 0.143*n;
     //   cout<<m;
        n = pow(m, n );
        
      //  cout<<

        cout<<round(n)<<endl;
        
        
    }
}