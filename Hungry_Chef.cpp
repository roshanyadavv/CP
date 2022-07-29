#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int x,y,n,r, normal=0, premium=0;
        cin>>x>>y>>n>>r;

        if(x*n > r)
           cout<<"-1"<<endl;

        else{

            if(y*n <= r)
              cout<<"0 "<<n<<endl;
            
            else{
              
              long long int determinant = abs(x-y);

              if(determinant != 0){
                normal = abs(r-(y*n))/determinant;
                
                if((normal)*x + y*(n-(normal)) <=r){
                    cout<<normal<<" "<<n-(normal)<<endl;
                }
                else{
                    cout<<normal+1<<" "<<n-normal-1<<endl;
                }
              //  premium = n-normal;

              //  cout<<normal<<" "<<premium<<endl;
              }
              else{
                cout<<"-1"<<endl;
              }
              
            }
        }
        

    }
}