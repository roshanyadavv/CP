#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, k, count=0;
        cin>>n>>k;

        string s;
        cin>>s;
        
        
  
            int j=n-1;//cout<<j;

            for(int i=0; i<n/2; i++){
                
                  if(s[i]!=s[j])
                     count++;

  //              cout<<s[i]<<s[j]<<" ";
                  j--;
                  
               }

            
            if(n%2==0){
               if(count<=k && (k-count)%2 == 0  && k-count<=n-count)
                  cout<<"YES"<<endl;
            
                else 
                  cout<<"NO"<<endl;}
            
            else{
                if(count<=k  &&  k-count<=n-count)
                  cout<<"YES"<<endl;
                
                else
                  cout<<"NO"<<endl;
            
            }
          
        
        
    }
}