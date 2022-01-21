#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      int k, count=0;
      cin>>k;

      vector<int> v;
      vector<int> s;

      for(int i=1; i<=sqrt(k); i++){
          if(k%i==0){
              if(i==1)
                count++;

              else if(i==k/i)
                count++;
            
              else{
                  count++;
                  count++;
              }
          }
      }

    /*  sort(v.begin(),v.end(), greater<int>());
      for(int i=0; i<v.size(); i++){
          if(i==0)
            s.push_back(v[i]);
          
          else
          s.push_back(s[i-1]+v[i]);
      }

     
      //sort(s.begin(),s.end(), greater<int>());
      
      for(int i=0; i<v.size(); i++){
         //  cout<<v[i]<<" "<<s[i]<<endl;
             if(v[i]+s[i]==k)
                count++;
                 
          }
      */
      if(count>0)
      cout<<count<<endl;

      else
      cout<<"0"<<endl;




    }
}