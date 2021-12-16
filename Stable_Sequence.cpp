#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, count=0;
        cin>>n;

        vector<int> v;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        for(int i=0; i<n; i++){
            if(v[n-1]!=v[i])
              count++;
        }
        
        if(count>0)
           cout<<count<<endl;
        
        else
           cout<<"0"<<endl;
	}
	return 0;
}
