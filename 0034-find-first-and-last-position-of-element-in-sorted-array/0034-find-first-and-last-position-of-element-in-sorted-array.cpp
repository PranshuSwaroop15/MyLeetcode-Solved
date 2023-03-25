class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=(int)nums.size();
        
        int start=0,end=n,left,mid,right;
        
        
        while(start<end)
        {
            mid=(start+end)/2;
            
            if(nums[mid]>=target)
            {
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        left=start;
        start=0,end=n;
        while(start<end)
        {
            mid=(start+end)/2;
            
            if(nums[mid]>target)
            {
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        
        right=start;
        
        return left==right ? vector<int>{-1,-1}:vector<int>{left,right-1};
    }
};