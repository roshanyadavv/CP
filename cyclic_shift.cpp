#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
    int n, k, tcount=0, count=0, rep=0, temp=0;
    cin>>n>>k;

    string s, max="0";
    cin>>s;

    for(int i=0; i<n; i++){

        for(int j=0; j<n-1; j++){

           if (j==0){
            temp = s[0];}
           
           s[j] = s[j+1];

           if(j == n-2)
             s[j+1] = temp;
           
         //  cout<<s<<" ";
        }
        //cout<<endl;

        tcount++;
        
        if(max < s){
          // cout<<s<<" ";
           max = s;
           count = tcount;
         //  cout<<s;
        }

        else if(max == s){
           rep = tcount-count;
         //  cout<<rep;
         //  cout<<s<<endl;
           break;
        }

    }
   // cout<<p;
    
    if(rep<=0){
        cout<<count + (n)*(k-1)<<endl;
    }
    
    
    else
        cout<<count + rep*(k-1)<<endl;
    
    

    }
}
