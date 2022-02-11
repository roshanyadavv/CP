#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, carl=0,chef=0;
        cin>>n;
        
        string s;
        cin>>s;
        //cout<<s;
        for(int i=0; i<14; i++){
            if(s[i]=='C')
               carl++;
            
            else if(s[i]=='N')
               chef++;
        }
       // cout<<chef<<" "<<carl;


        if(carl>chef)
           cout<<60*n<<endl;
        
        else if(chef>carl)
           cout<<40*n<<endl;
        
        else
           cout<<55*n<<endl;
	}
	return 0;
}
