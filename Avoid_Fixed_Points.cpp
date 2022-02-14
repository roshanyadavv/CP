#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
        int n,count=0, op=0;
        cin>>n;

        vector<long long int> v;
        vector<int> vg;
        vector<int> vl;

        for(int i=0; i<n; i++){
            
            long long int a;
            cin>>a;
            v.push_back(a);
        }
        
        for(int i=0; i<n; i++){

            op = i + count +1;
            if(v[i] == op){
              count++; 
            }
        }
        
        cout<<count<<endl;

	}
	return 0;
}