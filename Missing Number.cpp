class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> bb(nums.size(),0);
        int ans,x;
        for(int n=0;n<nums.size();n++)
        {
            bb[nums[n]]=1;
        }
        for(x=0;x<nums.size();x++)
        {
            if(bb[x]==0)
                break;
        }
        ans=x;
        return ans;
    }
};
