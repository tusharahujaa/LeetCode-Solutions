class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minp=INT_MAX,profit=0;
        int i=0;
        while(i<n-1)
        {
            if(prices[i]<prices[i+1])
                profit=profit+(prices[i+1]-prices[i]);
            i++;
        }
        return profit;
    }
};