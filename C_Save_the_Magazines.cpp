#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, ans =0;
        cin>>n;
        
        string s;

        cin>>s;

        vector<int> v;

        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            v.push_back(k);

        }
        if(s[0] == '1')
           ans += v[0];
        for(int i=1; i<n; i++){

            if(i < n-1){    
            if((v[i-1] > v[i]) && s[i] == '1' && s[i-1] == '0'){
                ans+= v[i-1];
                s[i] = '0';
            }
            
            else if((v[i-1] < v[i] && v[i+1] < v[i]) && (v[i-1] > v[i+1]) && (s[i-1] == '0' && s[i+1] == '1') && s[i] == '1'){
                ans += v[i-1];
                s[i] = '0';
            }
            else{
                if(s[i] == '1')
                  ans += v[i];
            }
            }

            if(i == n-1){
                if(v[i-1] < v[i])
                  ans += v[i];
                
                else if(s[i-1] == '0' && v[i-1] > v[i])
                  ans += v[i-1];
            }

          //  cout<<ans<<" ";
        }

    

        cout<<ans<<endl;
    }


}