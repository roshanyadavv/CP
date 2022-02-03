#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t, x=0, y=0;
    char a;
  //  cin>>t;
    
  //  while(t--)
  string s;
  cin>>s;

        for(int i=0; i<s.size(); i++){
            
            if(s[i] == 'z' || s[i]=='Z')
              x++;
            
            else
              y++;

        }

        if(2*x == y)
           cout<<"Yes"<<endl;
        
        else
           cout<<"No"<<endl;
  //  }

}