#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
        long long int sum=0;
	    
	    cin>>n>>q;
	    
        vector<int> v;
        int p[q][2];

        for(int i=0; i<n; i++){
            int k;
            cin>>k;
           // sum += k;
            v.push_back(k);
            
        }

        for(int i=0; i<n; i++){
            sum =  sum + v[i];
        }

        for(int i=0; i<q; i++){  
            
            cin>>p[i][0];
            cin>>p[i][1];

        }

        for(int i=0; i<q; i++){
            int temp = p[i][1] - p[i][0];
            temp++;

            if(temp%2 ==0)
              continue;
            
            else
              sum++;
        }
                

        cout<<sum<<endl;
	    

	}
	return 0;
}
