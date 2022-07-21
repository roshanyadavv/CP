#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int n, sum=0;
        cin>>n;

        vector<long long int> v;

        for(long long int i=0; i<n;i++){
            long long int a;
            cin >>a;
            v.push_back(a);
            sum +=a;
        }

        sort(v.begin(), v.end());
        
        if(v[0] == 1 && v[1] == 1 && n ==2)
           cout<<"CHEFINA"<<endl;
      /*  else if((v[0] == 1 && v[1] == 1 ) && (sum)%2 == 0)
           cout<<"CHEF"<<endl;
        
        else if((v[0] == 1 && v[1] == 1 ) && (sum)%2 != 0)
           cout<<"CHEFINA"<<endl;*/
        
        else if((sum-n)%2 != 0)
           cout<<"CHEF"<<endl;
        
        else
           cout<<"CHEFINA"<<endl;
    }
}