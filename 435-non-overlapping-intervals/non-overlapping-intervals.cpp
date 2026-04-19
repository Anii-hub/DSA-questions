class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      
        sort(intervals.begin(),intervals.end(),[](const auto& a, const auto& b) {
    return a[1] < b[1];});
        int result=0;
        int n=intervals.size();
        int prev=intervals[0][1];
        for(int i=1;i<n;i++){
            if(prev>intervals[i][0]){
                result++;
                
            }
            else{prev=intervals[i][1];}
        }
        
        return result;
    }
};