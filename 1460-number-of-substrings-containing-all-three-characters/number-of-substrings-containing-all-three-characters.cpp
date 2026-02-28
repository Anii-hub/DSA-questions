class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int i=0;
        int j=0;
        int n=s.size();
        unordered_map<char,int>mpp ={{'a',0},{'b',0},{'c',0}};
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            while(mpp['a']>0 && mpp['b']>0 && mpp['c']>0){
                count+=n-i;
                mpp[s[j]]--;
                j++;
            }
        }
        return count;
        
    }
};