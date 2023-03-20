class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        vector<int>ans;
        
        int low=0;
        
        int high=s.size();
        
        bool exitCond=false;
        
        for(int i=0;i<=s.size()-1;i++){
            
            if(s[i]=='I')
            {
                ans.push_back(low++);
            }
            else if(s[i]=='D')
            {
                ans.push_back(high--);
            }
            
            if(i==s.size()-1){
                if(exitCond==false)
                
                    --i;
                exitCond=true;
            }
           
        }
        
        return ans;
        
    }
};