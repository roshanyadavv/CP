#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while (t--)
    {
        vector<int> v;
        
        for(int i=0; i<7; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        cout<<v[6]-v[5]<<" "<<v[6]-v[4]<<v[6]-v[3]<<endl;
    }
    

}
