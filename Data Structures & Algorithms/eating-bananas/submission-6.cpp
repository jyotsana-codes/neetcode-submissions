class Solution {
public:

    bool canEat(vector<int>& piles, int h, int speed)
    {
        long long hours = 0;

        for(int pile : piles)
        {
            // ceil(pile / speed)
            hours += (pile + speed - 1) / speed;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = high;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            // possible speed
            if(canEat(piles, h, mid))
            {
                ans = mid;
                high = mid - 1; // try smaller speed
            }
            else
            {
                low = mid + 1; // need faster speed
            }
        }

        return ans;
    }
};