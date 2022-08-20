class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minsofar=INT_MAX,maxprofit=0;
      for(int i=0;i<n;i++)
      {if(minsofar>prices[i])
          minsofar=prices[i];
       else if(prices[i]>minsofar)
          maxprofit=max(maxprofit,prices[i]-minsofar);
      }
        
      return maxprofit;  
    }
};