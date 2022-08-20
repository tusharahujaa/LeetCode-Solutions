class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++) 
            v.push_back({nums[i],i});
        int front=0,rear=n-1,idx1=0,idx2=0;
        
        sort(v.begin(),v.end());
        
        while(front<rear)
        {
         if(v[front].first+v[rear].first==target)
            
            {idx1=v[front].second;
             idx2=v[rear].second;
            break;
            }
         else if(v[front].first+v[rear].first>target)
             rear--;
         else front++;
         }
return {idx1,idx2};    } 

    
};