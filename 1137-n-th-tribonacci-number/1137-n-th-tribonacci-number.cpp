class Solution {
public:
    
    int t0=0,t1=1,t2=1;
    
     long long arr[38];
    
    int tribonacci(int n) {
        
        if(n==0)
        {
            return t0;
        }
        
        if(n==1)
        {
            
            return t1;
        }
        
        if(n==2)
        {
            return t2;
        }
        
        if(arr[n]!=0)
        {
            return arr[n];
        }
        return arr[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        
    
    }
};