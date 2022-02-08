#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    vector<int> v;
//    cout<<s.size();
    for(int i=0; i<s.size(); i++){
            if(i != 2 && i !=6){
            char a = s[i];
            string s1;
            s1.push_back(a);
            int n = stoi(s1);
            v.push_back(n);
            s1.pop_back();}
    }
    int s1 = v[0]+v[1];
    int s2 = v[2]+v[3];
    int s3 = v[3]+v[4];
    int s4 = v[5]+v[6];


    if( s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U' || s[2] == 'Y' )
       cout<<"invalid"<<endl;
    
    else if(s1%2 == 1 || s2%2 == 1 || s3%2 == 1 || s4%2 == 1){
         cout<<"invalid"<<endl;
    }

    else
       cout<<"valid"<<endl;
}