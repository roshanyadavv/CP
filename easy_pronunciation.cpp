#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,count=0;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<n; i++){

            if(s[i] != 'a' && s[i] !='e' && s[i] !='i' && s[i] !='o' && s[i] !='u'){
                count++;
         //       cout<<s[i];
            }

            if(count == 4)
              break;
            
            else if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u')
              count = 0;
        }
       // cout<<count;

        if(count == 4)
           cout<<"NO"<<endl;
        
        else
           cout<<"YES"<<endl;
        

    }
}