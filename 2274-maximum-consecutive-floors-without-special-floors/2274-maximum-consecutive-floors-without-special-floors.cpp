/*
         #GOOGLE
Intution 

1st
SENTINELS
push top+1 and bottom-1 into special vector
then sort it
and find the largest difference between two adjacent numbers

T.C = nlogn
S.C = 1


*/
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        special.push_back(top+1);
        special.push_back(bottom-1);
        sort(begin(special),end(special));
        int maxa = INT_MIN;
        for(int i = 1; i < special.size(); i++){
           int temp = special[i] - special[i-1]-1;
            maxa = max(temp,maxa);
        } return maxa;
     }
};