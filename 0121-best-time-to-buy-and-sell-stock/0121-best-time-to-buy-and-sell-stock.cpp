class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_so_far=prices[0];

    int max_profit=0;

    int size=prices.size();
    for(int i=1;i<size;i++){

        min_so_far=min(min_so_far,prices[i]);
        int profit=prices[i]-min_so_far;

        max_profit=max(max_profit,profit);
    }

    return max_profit;
    }
};