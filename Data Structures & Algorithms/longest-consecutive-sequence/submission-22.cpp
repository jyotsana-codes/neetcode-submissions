class Solution {
public:
    int longestConsecutive(vector<int>& nums)
{
    if(nums.empty())
        return 0;

    sort(nums.begin(), nums.end());

    int longest = 1;
    int maxlongest = 1;
    int prev = nums[0];

    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] == prev)
            continue;

        if(nums[i] == prev + 1)
        {
            longest++;
        }
        else
        {
            longest = 1;
        }

        prev = nums[i];
        maxlongest = max(maxlongest, longest);
    }

    return maxlongest;
}
};
