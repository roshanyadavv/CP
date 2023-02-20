#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s1,s2;
	    cin>>s1>>s2;
        
        int sum1 = 0 ,sum2=0;

        if((s1[0] - s2[0]) < 0)
           sum1 -= (s1[0] - s2[0]) +26;
        
        else
           sum1 -= s1[0] - s2[0];

        if((s2[0] - s1[0]) < 0)
           sum2 += (s2[0] - s1[0]) +26;
        
        else
           sum2 += s2[0] - s1[0];
        
        cout<<sum1<<" "<<sum2<<endl;
        //int sum1 =  ,sum2=0;

        for(int i=1; i<n; i++){
          //  int temp = sum;
            int diff = s1[i] - s2[i];
            int dif = s2[i] - s1[i];
            // if(diff < 0)
            //   diff += 26;
            
            // if(dif < 0)
            //   dif +=26;
            
            if(abs(0 - (sum1 -abs(dif))) <= abs(0 - (sum1 + abs(diff)))   )
               sum1 -= abs(dif);
            
            else
               sum1 += abs(diff);
        }

        for(int i=0; i<n; i++){
          //  int temp = sum;
            int diff = abs(s1[i] - s2[i]);
            int dif = abs(s2[i] - s1[i]);
            // if(diff < 0)
            //   diff += 26;
            
            // if(dif < 0)
            //   dif +=26;
            
            if(abs(0 - (sum2 -dif)) <= abs(0 - (sum2 + diff))   )
               sum2 -= dif;
            
            else
               sum2 += diff;
        }


        cout<<"sum1 "<<sum1<<" sum2 "<<sum2<<endl;



	}
	return 0;
}
