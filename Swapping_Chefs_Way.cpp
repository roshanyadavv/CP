#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s,front,back,resultt;
        cin>>s;

        

        for(int i=0; i<n/2; i++){

            if(s[i] > s[n-i-1]){
                
               char s1 = s[i];
               char s2 = s[n-i-1];

               string a = s1;
               string b = s2;

               s.replace(i, 1, s[n-i-1]); 
               s.replace(n-i-1, 1, s[i]); 
               
            }
        }

        cout<<s<<endl;

/*
        if(n%2 == 0){
           
        }
          cout<<"yes"<<endl;

        else{
            if(s[n/2] >= s[n/2+1] && s[n/2] <= s[n/2-1])
              cout<<"yes"<<endl;

            else
               cout<<"no"<<endl;
        }
*/
    }
}