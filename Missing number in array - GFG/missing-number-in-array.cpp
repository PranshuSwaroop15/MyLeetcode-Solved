//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        int sum_of_natural_numbers=0;
        
        int sum_of_array=0;
        
        for(int i=1;i<=n;i++){
            sum_of_natural_numbers+=i;
        }
        for(int i=0;i<array.size();i++){
            
           sum_of_array=sum_of_array+array[i];
        }
        
        int ans=(sum_of_natural_numbers-sum_of_array);
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends