class Solution {
public:
    void solve(int i,int j, vector<char>&s){
        int n=s.size();
        if(i>=j){
            return;
        }
        else{
            swap(s[i],s[j]);
            solve(i+1,j-1,s);
        }

    }
    void reverseString(vector<char>& s) {
        int n=s.size();
         solve(0,n-1,s);
    }
};