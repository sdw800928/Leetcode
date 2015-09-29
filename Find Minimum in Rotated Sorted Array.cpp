class Solution {
public:
    int findMin(vector<int>& nums) {
        int mysize=nums.size(),mmin,beg=0,end=nums.size()-1,last;
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];

        while(mysize/2>=1)
        {
            last=mysize%2;
            mysize=mysize/2;
            if(nums[beg]<=nums[beg+mysize-1]&&nums[beg+mysize]<=nums[end])
            {
                mmin=min(nums[beg],nums[beg+mysize]);
                break;
            }
            if(nums[beg]>nums[beg+mysize-1])
                end=beg+mysize-1;
            else
            {
                beg=beg+mysize;
                mysize=mysize+last;
            }
        }
        return mmin;
    }
};
