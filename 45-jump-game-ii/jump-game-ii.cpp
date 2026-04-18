class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0;
        int r=0;
        int j=0;
        int n=nums.size();

        while(r<n-1){
            int farthest=r;
            for(int i=l;i<=r;i++){
                farthest=max(farthest,i+nums[i]);
            }
                l=r+1;
                r=farthest;
                j+=1;

            
        }
        return j;
    }
};