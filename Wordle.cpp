#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s,s1,s2;
        cin>>s>>s1;

        for(int i=0; i<5;i++){
            if(s[i] == s1[i])
               s2.push_back('G');
            
            else
               s2.push_back('B');
        }
        
        cout<<s2<<endl;
    }
}