class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int totalNumberBurgers = cheeseSlices;
        
        // Low & high represent boundaries of binary search for number of jumbo burgers
        int low = 0; int high = totalNumberBurgers;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            int currSlices = mid*4 + (totalNumberBurgers - mid)*2;
            if (currSlices == tomatoSlices) {
                return {mid, totalNumberBurgers-mid};
            }
            
            if (currSlices < tomatoSlices) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        
        return {};
    }
};