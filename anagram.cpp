#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    int count1=0, count2=0;
    

    if(s1.size() != s2.size())         
       cout<<"not anagram"<<endl;

    else{ 
    for(int i=0; i<s1.size(); i++){
        count1 = count1 + int(s1[i]);
        count2 = count2 + int(s2[i]);
    }
    }

    if(count1 == count2)
       cout<<"anagram"<<endl;

}