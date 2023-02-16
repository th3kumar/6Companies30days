class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0], n = nums.size(),  count = 1 ;
        for(int i = 1; i < n; i++){
            if(element == nums[i]) count++;
            else {
                if(count == 1 ) element = nums[i];
                else count--;
            }
        } return element;
    }
};