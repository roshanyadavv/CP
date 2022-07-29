#include<bits/stdc++.h>
using namespace std;

vector<int> counts;

void countFreq(vector<int> v, int n)
{
    unordered_map<int, int> mp;
  
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[v[i]]++;
  
    // Traverse through map and print frequencies
    for (auto x : mp)
       counts.push_back(x.second);
    
      //      cout << x.first << " " << x.second << endl;

}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;

        vector<int> v;
        
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            v.push_back(a);
        }

        countFreq(v,n);
        int k = counts.size();
        sort(counts.begin(), counts.end());
      //  cout<<counts[k-1]<<" bbbb";

        if(counts.size() > 1){
            if(counts[counts.size()-1] == counts[counts.size()-2]){
                cout<<counts[counts.size()-1]<<endl;
            }

            else if(counts[counts.size()-1]%2 == 0)
              cout<<counts[counts.size()-1]/2<<endl;
            
            else
              cout<<counts[counts.size()-1]/2+1<<endl;
        }

        else if(counts.size() == 1){
           if(counts[0]%2 == 0)
              cout<<counts[0]/2<<endl;
            
            else
              cout<<counts[0]/2+1<<endl;
        }
    counts.clear();
	}
	return 0;
}
