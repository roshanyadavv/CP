#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, ans =0, anss =0;
	    cin>>n;
	    
        vector<int> v;
        map<int, int> m;
        int k[n+1] = {0};

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
            m[a]++;
        }

        for(auto it: m){
             ans = max(ans, it.second);
             k[it.first] = it.second;
        }

        for(int i=0; i<n; i++){
            if((i^(i+1)) <= 1){
                anss = max(anss, k[i]+k[i+1]);
            }
        }

        ans = n- max(ans, anss);
         cout<<ans <<endl;


	}
	return 0;
}
