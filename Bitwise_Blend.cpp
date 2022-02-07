#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int t;
    cin>>t;

    while(t--){

        long long int  n, count=0, max=0;
        cin>>n;
        
        long long int a[n];
        
        vector<long long int> v1;

        for(long long int i=0; i<n; i++){
            cin>>a[i];
        //    cout<<a[i];
        }
        


        for(long long int i=n-2; i>=0; i--){

            if( (a[i] & a[i+1]) %2 == (a[i] | a[i+1]) %2 ){
                
                for(long long int j=n-1; j>=0; j--){

                    if(i!=j){

                    if(( (a[i] ^ a[j]) & a[i+1]) %2 != ((a[i] ^ a[j]) | a[i+1])%2 ){
                       a[i] = a[i]^a[j];
                       v1.push_back(i+1);
                       v1.push_back(j+1);
                       count++;
                    }

                    if((a[i] & a[i+1]) %2 != (a[i] | a[i+1])%2 )
                       break;
                    
                    else if( j==1 && ((a[i] & a[i+1]) %2 == (a[i] | a[i+1])%2 ))
                      max = n+1;
                    }
                }
            }
        }

        if(max >= n)
          cout<<"-1"<<endl;

        else{
            
            cout<<count<<endl;
            
            for(long long int i=0; i<count; i+=2){
                cout<<v1[i]<<" "<<v1[i+1]<<endl;
            }
        }


    }
}
