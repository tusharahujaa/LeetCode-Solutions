class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0,j=0;
        for(int i=0;i<n;i++)
        { 
            if(nums[i]!=0)
            { 
                nums[count]=nums[i];
            count++;
            }
            else 
            {j++;
                continue;}
         
        }
        while(j!=0)
        {
            nums[count]=0;
            count++;
            j--;
        }
    }
};