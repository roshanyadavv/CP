#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,z=1,o=1, max1=0, max0 =1, one=0, zero =0;
        cin>>n;

        string s;
        cin>>s;
        if(s[0] == '0')
           zero =1;
        else
           one =1;

        for(long long int i=1; i<n; i++){

            if(s[i-1] == s[i])
              max0++;
            
            else{
                max1 = max(max1, max0);
                max0 = 1;
            }




            if(s[i] == '1' ){
               one++;
               
            }
              
            else{
                zero++;
            }
        }
        max1 = max(max1, max0);
        long long int maxx = max( max1*max1,zero*one );
        cout<<maxx<<endl;

    }
}