/*
intution
sliding window

pehle do, agle do
esse kar kar k maximum bharte jaana hai

S.C = n
T.C = 

*/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>m;
        int i = 0, j = 0, ans = 0;
        while(j < fruits.size()){
            m[fruits[j]]++;
            while(m.size()>2){
            (m[fruits[i]] == 1) ? m.erase(fruits[i]) : m[fruits[i]]--;
            i++;
            } ans = max(ans,j-i+1);
            j++;
        } return ans;
    }
};