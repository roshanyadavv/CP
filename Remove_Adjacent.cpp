#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, max=0;
        cin>>n;

        int a[n];
        vector<int> v;


        for(int i=0; i<n; i++){
            cin>>a[i];
            
            if(a[i]>max)
              max=a[i];
            
            if(n%2!=0){
               if(i%2 != 0 && i<n-1 ){
                  v.push_back(a[i]+a[i-1]);
            }
            }

            else{
                if(i%2 != 0 && i<n ){
                   v.push_back(a[i]+a[i-1]);
            }
            }
        }

        for(int i=0; i<v.size(); i++)
           cout<<v[i]<<" ";


    }
}