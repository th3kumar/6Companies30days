class Solution {
public:
    int maxCoins(vector<int>& piles, int res = 0) {
        stable_sort(begin(piles),end(piles));
        for(int i = piles.size()/3; i < piles.size(); i+=2) res += piles[i];
        return res;
    }
};