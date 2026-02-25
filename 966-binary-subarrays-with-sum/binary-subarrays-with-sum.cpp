class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map <int,int> mpp;
        int count=0;
        int presum=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            presum +=nums[i];
            int sum= presum-goal;
            count+=mpp[sum];
            mpp[presum]+=1;
        }
        return count;
    
    }
};