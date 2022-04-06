#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        int n,count1=0, count=0;
        cin>>n;
        
        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            
            if(s[i] == '1'){
                count++;
                if(s[i] == s[i-1])
                  count1 =1;
            }
        }
     //   cout<<count;
        if(count1 == 1)
          cout<<"2"<<endl;
        
        else if(count > 0)
          cout<<"1"<<endl;

        else
          cout<<"0"<<endl;
    }
}