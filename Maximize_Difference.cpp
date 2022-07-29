#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int t;
    cin>>t;

    while(t--){

        long long int n,m,a=0,b=0, diff=0;
        cin>>n>>m;
        
        for(long long int j=n; j<=m; j++){
            if(j<=n*2){
            long long int k = m/j;

            if(abs(k*j - j) >= diff){
                a = k*j;
                b = j;
                diff = abs(k*j - j);
        //    }
            }
            }
          //  if(diff == m/2)
          //    break;
        }
        cout<<a<<" "<<b<<endl;

    }
}