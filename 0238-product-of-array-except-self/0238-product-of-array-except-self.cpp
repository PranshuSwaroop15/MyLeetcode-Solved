class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>ans;
        int n=nums.size();
        int product=1;
        for(int i=0;i<n;i++){
            
            product=product*nums[i];
            ans.push_back(product);
        }
        
        product=1;
        
        for(int i=n-2;i>=0;i--){
            
            ans[i+1]=ans[i]*product;
            
            product=product*nums[i+1];
        }
        ans[0]=product;
        
        return ans;
    }
};