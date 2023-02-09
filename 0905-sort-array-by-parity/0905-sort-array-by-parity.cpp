class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int pt1=0;
        
        int pt2=0;
        
        int n=(int)nums.size();
        
        while(pt1<n && pt2<n){
            
            
            if(nums[pt2]%2==0){
                
                
                swap(nums[pt1],nums[pt2]);
                
                pt1++;
            }
            
            pt2++;
            
        }
        
        
        return nums;
        
    }
};