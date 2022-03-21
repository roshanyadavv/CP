#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        int n,count1=0,count0=0;
        cin>>n;

        string s;
        cin>>s;

        vector<int> v;
        vector<int> v1;

        for(int i=0; i<n; i++){

            if(s[i] == '0'){
              v.push_back(0);
              count0++;
            }
              

            else{
               v1.push_back(1);
               count1++;
            }
              
              
        }
        
        if(count0 > 0){
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
        }
        }

        if(count1> 0){
        for(int i=0; i<n-v.size(); i++){
            cout<<v1[i];
        }
        }

        cout<<endl;

    }
}