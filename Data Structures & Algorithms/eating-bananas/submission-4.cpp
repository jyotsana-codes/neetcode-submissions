
   class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int maxele = *max_element(piles.begin(), piles.end());

        for(int k = 1; k <= maxele; k++)
        {
            long long hours = 0;

            for(auto pile : piles)
            {
                hours += ceil((double)pile / k);
            }

            if(hours <= h)
            {
                return k;
            }
        }

        return -1;
    }
};
