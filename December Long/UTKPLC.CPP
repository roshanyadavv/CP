#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    
	   
	   if(a==d || a==e)
	     cout<<a<<endl;
	   
	   else if(b==d || b==e)
	     cout<<b<<endl;
	   
	   else if(c==e || c==d)
	     cout<<c<<endl;

	}
	return 0;
}
