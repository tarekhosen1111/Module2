class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size=nums.size();
        int i;
        for(i=1;i<size;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
};
