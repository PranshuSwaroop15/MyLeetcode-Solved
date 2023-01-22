//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        
        if(a[i]==0){
            
            count0++;
        }
        
        if(a[i]==1){
            
            count1++;
        }
        
        if(a[i]==2){
            
            count2++;
        }
    }
    
    
    int x=0;
    for(int i=0;i<count0;i++){
        
        a[i]=0;
        x++;
    }
    
   for(int i=count0;i<n;i++){
       
       if(count1!=0){
           
           a[i]=1;
       }
       
       else{
           
           break;
       }
       x++;
       count1--;
   }
   
  for(int i=x;i<n;i++){
       
      if(count2!=0){
           
          a[i]=2;
      }
       
      else{
           
          break;
      }
       
      count2--;
  }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends