#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t, min=0, count=0;
  //  cin>>t;
    
  //  while(t--){

        string s;
        cin>>s;

        for(int i=0; i<s.length(); i++){

            if(s[i] == 'z')
              count++;
            
            else
              min++;

        }

        if(count == 2*min)
           cout<<"Yes"<<endl;
        
        else
           cout<<"No"<<endl;
  //  }

}