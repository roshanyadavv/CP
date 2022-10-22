
#include<bits/stdc++.h>
using namespace std;


vector<int> freq(vector<int> listEle)
{
    
    vector<int> answer, v, v1;
    int count =1;
    
    for(int i=0; i<listEle.size(); i++){
        
        if(i >0){
            if(listEle[i] != listEle[i-1]){
                v.push_back(count);
                v1.push_back(listEle[i-1]);
                count = 1;
            }
            else{
                count++;
            }
        }

        
    }
        
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i]; j++){
                answer.push_back(v1[i]);
            }
        }
        return answer;
    }
    
        
        
int main() {
    // Write C++ code here
    vector<int> listEle{1,2,3,3,4,4,5,5,5,5,6,6,7,8,9,10};
    vector<int> k = freq(listEle);
    for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }
    return 0;
}