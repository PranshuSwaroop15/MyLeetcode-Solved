class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0,j=0;
        
        int n=(int)s.size();
        int m=(int)t.size();
        
        while(i<n && j<m){
            
            if(s[i]==t[j]){
                
                i++;
                
                j++;
            }
            else{
                j++;
            }
            
        }
        
        if(i>=n){
            
            return true;
        }
        else{
            
            return false;
        }
        
    }
};