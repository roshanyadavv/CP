


vector<int> v;

for(int i=0; i<queries.size(); i++){
    sum =0;
    for(int j=0; j<queries[i]; j++){
        sum += scores[j];
    }
    v.push_back(scores);
}

return v;


sort(arr.begin() , arr.end());    //Sorted Array
        if(arr.size() < 3){    //Base case 1
            return 0;
        }
        if(arr[0] > 0){        //Base case 2
            return 0;
        }
        int answer;
        for(int i = arr.size()-1 ; i >=0 ; i--){     //Traversing the array to fix the number.
            if(arr[i] > 0){     //If number fixed is +ve, stop there because we can't make it zero by searching after it.
                break;
            }
            if(i > 0 && arr[i] == arr[i - 1]){    //If number is getting repeated, ignore the lower loop and continue.
                continue;
            }
            int low = i + 1 , high = arr.size() - 1;   //Make two pointers high and low, and initialize sum as 0.
            int sum = 0;
            while(low < high){                          //Search between two pointers, just similiar to binary search.
                sum = arr[i] + arr[low] + arr[high];
                if(sum > 0){   //If sum is +ve, means, we need more -ve numbers to make it 0, decreament high (high--).
                    high--;
                } else if(sum < 0){ //If sum is -ve, means, we need more +ve numbers to make it 0, increament low (low++).
                    low++;
                } else {
                    answer++;  //we have found the required triplet, push it in answer vector
                    int last_low_occurence = nums[low] , last_high_occurence = nums[high];  //Now again, to avoid duplicate triplets, we have to navigate to last occurences of num[low] and num[high] respectively
                    while(low < high && nums[low] == last_low_occurence){   // Update the low and high with last occurences of low and high.
                        low++;
                    }
                    while(low < high && nums[high] == last_high_occurence){
                        high--;
                    }
                }
            }
        }
        return answer;





int ans = stoi(s);


ans *= 2;

string ss = to_string(ans);

return ss;



long long int ans =0, k = sqrt(n);

long long int temp = ((k+1)*(k+1)) - n;
long long int temp1 = n- (k*k);


ans = min(temp, temp1);

return ans;

int ans =0;

    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8));

    if (month > 2 && year % 4 == 0
        && (year % 100 != 0 || year % 400 == 0)) {
        ++day;
    }
 
    while (month-- > 1) {
        day = day + days[month - 1];
    }

return day*10;



ll hd, md;
    ll i = 0, j = 0;
 
    ll anw = 0;
    hd = A[i];
    md = B[j];
    while (i < n && j < m)
    {
        if (hd == md)
        {
            i++;
            j++;
            if (i < n)
            {
                hd += A[i];
            }
            if (j < m)
            {
                md += B[j];
            }
            anw++;
        }
        else if (hd > md)
        {
            j++;
            if (j < m)
            {
                md += B[j];
            }
        }
        else
        {
            i++;
            if (i < n)
            {
                hd += A[i];
            }
        }
    }
    if (hd != md)
    {
        return -1;
    }
    else
    {
        return anw;
    }



select TOURNAMENT.Team_Name, COUNT(Team_Name) Total, SUM()


sum = 0
n = len(array)

while m > 0 :
   array.sort()
   maxx = array[n-1]
   sum += maxx



SELECT deptname from department where ranks in between 2 AND 5 order by RANKS

