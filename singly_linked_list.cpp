
#include <bits/stdc++.h>
using namespace std;

int processArray(std::vector<int> &array) {
  int max = 1, len = 1, n = array.size(), start =0, end =0, ans =0;

    for (int i=1; i<n; i++){

        if (array[i] >= array[i-1])
           len++;

        else
        {   
            end = i;
            if (max < len){
               max = len;
               ans = array[end]-array[start];
            }    
            start = i+1;
            len = 1;
        }    
    }

return ans;
}

    


int main(void) {
  std::vector<int> array;
  int val;
  while (std::cin >> val) {
    if (val < 0) break;
    array.push_back(val);
  }
  std::cout << processArray(array) << std::endl;
  return 0;
}

