/*
Intution

Seive of erotothenens

first find alll the prime numbers btw in left and right range
then 
traverse through the prime no. 
and find two consecutive prime numbers having minimum difference
and return

T.C = O(log(log(n)));

S.C = O(n);
*/


class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
      vector<bool> prime(right+1,true);
        for (int p = 2; p * p <= right; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= right; i += p)
                prime[i] = false;
        }
    }
        vector<int> res;
        for(int i = left; i <= right; i++){
           if(prime[i] && i > 1) res.push_back(i);
        }
        
        if(res.size() < 2) return {-1,-1};
       //now maintaining minimum difference
        int mindiff = INT_MAX;
        int num1 = -1, num2 = -1;
        for(int i = 0; i < res.size()-1; i++){
            int high =  res[i+1];
            int low = res[i];
             if(high - low < mindiff){
                 mindiff = high - low;
                 num1 = low;
                 num2 = high;
             }
        }
        return {num1,num2};
    }
};