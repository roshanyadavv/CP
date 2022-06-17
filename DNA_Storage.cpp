#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        string s, ans;
        cin>>s;

        for(int i=0; i<n; i++){
            if(s[i] == '0' && s[i+1] == '0')
              ans.push_back('A');

            else if(s[i] == '0' && s[i+1] == '1')
              ans.push_back('T');
            
            else if(s[i] == '1' && s[i+1] == '0')
              ans.push_back('C');

            else
              ans.push_back('G');
            
            i++;
        }

        cout<<ans<<endl;
    }
}