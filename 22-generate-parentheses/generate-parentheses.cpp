class Solution {
public:
    void solve(int n,int open,int close, string &res,vector<string>&temp){
        if(open==n && close == n){
            temp.push_back(res);
            return;
        }
        if(open<n){
            res.push_back('(');
            solve(n,open+1,close,res,temp);
            res.pop_back();
        }
        if(close<open){
            res.push_back(')');
                solve(n, open,close+1,res,temp);
                res.pop_back();
            
        }
    }
    vector<string> generateParenthesis(int n) {
        string res = "";
        vector<string> temp;
        solve(n,0,0,res,temp);
        return temp;
    }
};