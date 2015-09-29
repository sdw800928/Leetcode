class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=0, flag=0;
        if(nums.size()==0)
            return -1;
        do
        {
            if(nums[index]==target)
                return index;
            if(nums[index]<target)
            {
                if(flag==2)
                    break;
                flag=1;
                index++;
                if(index==nums.size())
                index=0;
            }
            else
            {
                if(flag==1)
                    break;
                flag=2;
                index--;
                if(index==-1)
                index=nums.size()-1;
            }
        }while(index!=0);
        return -1;
    }
};
