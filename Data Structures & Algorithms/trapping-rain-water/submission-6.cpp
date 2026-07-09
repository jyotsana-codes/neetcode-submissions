/*class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int leftMax,rightMax;
        leftMax=rightMax=0;
        int maxwater=0;
        while(left < right)
        {
            leftMax=max(leftMax,height[left]);
            rightMax=max(rightMax,height[right]);
            int water=0;
            maxwater=max(maxwater, water);
            if(leftMax < rightMax)
            {
                water=min(height[left], height[right])-height[left];
                left++;
            }
            else
            {
                water=min(height[left], height[right])-height[right];
                right--;
            }
            return maxwater;
        }
        
    }
};*/
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int leftMax = 0;
        int rightMax = 0;
        int water = 0;
        while(left < right)
        {
            leftMax=max(leftMax,height[left]);
            rightMax=max(rightMax,height[right]);


          
                if(leftMax  < rightMax)
                {
                    water += leftMax - height[left];
                    left++;
                }
                else
                {
                    water += rightMax - height[right];
                    right--;
                }
                
            
           
        }
        return water;
    }
};
