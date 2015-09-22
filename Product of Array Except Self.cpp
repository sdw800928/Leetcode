class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out;
        int right=1,left=1,ans;
        out.push_back(1);
        for(int n=0;n<nums.size()-1;n++)
        {
            right=right*nums[n];
            out.push_back(right);
        }
        for(int n=nums.size()-1;n>0;n--)
        {
            left=left*nums[n];
            out[n-1]=out[n-1]*left;
        }
        return out;
    }
};
