class Solution {
public:
    string removeDuplicates(string s) {
        
        int n=s.size();
        
        int i=0;
        
        stack<int>stack;
        
        while(i<n)
        {
            if(stack.empty() || stack.top()!=s[i]){
                
                stack.push(s[i]);
            }
            else{
                
                stack.pop();
                
                
            }
            i++;
        }
        
        string ans="";
        
        while(!stack.empty())
        {
            char ele=stack.top();
            
            stack.pop();
            
            ans+=ele;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};