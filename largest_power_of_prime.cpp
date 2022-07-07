#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int b,a, sum=0;
        cin>>b>>a;
        
        for(int i=0; i<b/a; i++){
            
            if(b/pow(a,i) > 0)
              sum = sum+ b/pow(a,i);
            cout<<pow(a,i)<<" ";
        }

        cout<<sum<<endl;
    }
}