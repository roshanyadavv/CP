#include<bits/stdc++.h>
using namespace std;

//long long count=0;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '/')
              count++;
        }
        

        cout<<count<<endl;
    }
}