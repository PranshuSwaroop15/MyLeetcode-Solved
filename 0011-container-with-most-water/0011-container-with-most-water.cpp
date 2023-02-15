class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        
        int n=(int)height.size();
        int i=0;
        int j=n-1;

        int ans;
        int max=0;

        while(i<j)
        {
            ans=(j-i)*min(height[i],height[j]);

            if(ans>max)
            {
                max=ans;
            }

            if(height[i]>height[j])
            {
                j--;
            }

            else
            {
                i++;
            }
        }

        return max;
        
    }
};