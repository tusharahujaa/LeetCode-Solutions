class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int m=INT_MAX;
        for(int n:nums)
        {
            m=min(m,n);
        }
        int sum=0;
        for(int n:nums)
        {
            sum=sum+n-m;
        }
        return sum;
    }
};