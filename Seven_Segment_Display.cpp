#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int sum=0,a=1,b=7, temp =0;
        string s;
        cin>>s;

        vector<int> v1;
        vector<int> v{ 6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        
        for(int i=0; i<s.size(); i++){
            char a = s[i];
            string s1;
            s1.push_back(a);
            int n = stoi(s1);
            sum += v[n];
           // cout<<sum<<" ";
            s1.pop_back();
        }
        

        temp = sum;
        //cout<<sum<<" ";

        if(sum%2 == 0){
            for(int i=0; i<sum/2; i++){        
            v1.push_back(a);
            }
        }

        else{
            
            v1.push_back(b);
            temp = temp-3;

            for(int i=0; i<temp/2; i++){
                v1.push_back(a); 
            }
        }
        
        for(int i=0; i<sum/2; i++){
            cout<<v1[i];
        }
        cout<<endl;
    }
}