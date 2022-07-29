#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,count=0;
        cin>>a>>b>>c;

        if(a != b)
          count++;
        
        if(b != c)
          count++;
        
        if(c != a)
          count++;
        
        
        if(count == 3){
            
            cout<<"NO"<<endl;
            
        }

        else if( count ==0 || count == 1)
          cout<<"YES"<<endl;
         
        else if(count == 2 ){
            if(a == b){
                if(c>a)
                  cout<<"YES"<<endl;
                else
                   cout<<"NO"<<endl;
            }
            else if(b == c){
                if(a>c)
                  cout<<"YES"<<endl;
                else
                  cout<<"NO"<<endl;
            }
            else if(a== c){
                if(b>a)
                  cout<<"YES"<<endl;
                else
                  cout<<"NO"<<endl;
            }
        }
    }
	return 0;
}
