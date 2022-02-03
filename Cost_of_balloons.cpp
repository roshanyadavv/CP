#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int g,p,n,sum=0, sum1=0;
        cin>>g>>p>>n;

        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;

            sum = sum + a*g +b*p;
            sum1 = sum1 + a*p +b*g;

            //cout<<sum<<" ";
        }

        cout<<min(sum,sum1)<<endl;


    }
}