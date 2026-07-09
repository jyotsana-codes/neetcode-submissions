class Solution {
public:
    int findMin(vector<int> &nums) 
    {
        int start=0;
        int end=nums.size()-1;int ans=INT_MAX;

        /*while(start < end)
        {
            int mid = start + (end - start) / 2;
            // minimum is in right half
            if(nums[mid] >= nums[end])
            {
                ans=min(ans, nums[start]);
                start = mid + 1;
            }
            // minimum is in left half including mid
            else
            {
                ans=min(ans, nums[mid]);
                end = mid-1;
            }
        }
        return ans;*/
        while(start < end)
{
    int mid = start + (end - start) / 2;

    if(nums[mid] > nums[end])
        start = mid + 1;
    else
        end = mid;
}

return nums[start];
    }
};
