class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1) 
            return nums[0];
        if (nums.size()==0) 
            return 0;
        vector<int> val={nums[0],max(nums[0],nums[1])};
        for (int i=2;i<nums.size();i++) 
        {
            val.push_back(max(nums[i]+val[i-2],val[i-1]));
        }
        return val.back();
    }
};
