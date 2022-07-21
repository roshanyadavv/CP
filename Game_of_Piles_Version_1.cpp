#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, sum=0;
        cin>>n;

        vector<int> v;

        for(int i=0; i<n;i++){
            int a;
            cin >>a;
            v.push_back(a);
            sum +=a;
        }

        sort(v.begin(), v.end());

        if(v[0] == 1)
           cout<<"CHEF"<<endl;
        
        else if(sum%2 == 0)
           cout<<"CHEFINA"<<endl;
        
        else
           cout<<"CHEF"<<endl;
    }
}