//google
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        stable_sort(begin(nums),end(nums));
        return nums;
    }
};