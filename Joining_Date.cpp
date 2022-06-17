#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        int n, k,ans=0;
        cin>>n>>k;

        if(n<5 || k > (n/5)*5 )
          cout<<"0"<<endl;

        else{
        
            ans = n/5 - k/5;
            
            if(n%5 !=0 && k%5==0)
              ans++;

            
            cout<<ans<<endl; 
        }
        
    }
}