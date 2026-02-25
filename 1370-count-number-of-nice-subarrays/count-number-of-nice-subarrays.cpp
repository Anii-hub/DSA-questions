class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        } 
        int count = 0 ;
        int i = 0 , j = 0 , curr_Sum = 0 , Zero_Count = 0 ;
        while(j < n)
        {
            curr_Sum = curr_Sum + nums[j] ;
            while(i < j && (curr_Sum > k|| nums[i] == 0))
            {
                if(nums[i] == 1)
                {
                    Zero_Count = 0  ;
                }
                else
                {
                    Zero_Count++ ;
                }
                curr_Sum -= nums[i] ;
                i++ ;
            }

            if(curr_Sum == k)
            {
                count = count + 1 + Zero_Count ;
            }
            j++ ;
        }
        return count ;
    }};