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
            a = i+1 - a;
            v.push_back(a);

            if(a == 0)
              count++;
        }
        
        for(int i=0; i<n; i++){
            if(){
              count 
            }
            
            if(i+1-v[i] == 0){
              vg.push_back
            }
        }

        if(count ==0 )
           cout<<"0"<<endl;
        


	}
	return 0;
}