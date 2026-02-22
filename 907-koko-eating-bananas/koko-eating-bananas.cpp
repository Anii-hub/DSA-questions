class Solution {
public:
    int maximum(vector<int>&m){
        int maxi=INT_MIN;
        for(int i=0;i<m.size();i++){
            maxi=max(maxi,m[i]);
        }
        return maxi;
    }
    int hours(vector<int>&p,int hour){
        int t=0;
        for(int i=0;i<p.size();i++){
            t+=ceil(double(p[i])/hour);
        }
        return t;
    }
    int minEatingSpeed(vector<int> piles, int h) {
        int low=1;
        int high=maximum(piles);
        while(low<high){
            int mid=low+(high-low)/2;
            int t=hours(piles,mid);
            if(t<=h){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }return low;
    }
};