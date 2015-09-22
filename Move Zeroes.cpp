class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroflag,tem;
        for(zeroflag=0;zeroflag<nums.size();zeroflag++)
        {
            if(nums[zeroflag]==0)
                break;
        }
        for(int n=zeroflag;n<nums.size();n++)
        {
            if(nums[n]!=0)
            {
                tem=nums[n];
                nums[n]=nums[zeroflag];
                nums[zeroflag]=tem;
                zeroflag++;
            }
        }
    }
};
