
void helper(vector<string> & v, string str, int open, int close, int n) {
    if (open == n && close == n) {
        v.push_back(str);
        return;
    }
    
    if (open < n)
        helper(v, str + "(", open + 1, close, n);
    
    if (close < open)
        helper(v, str + ")", open, close + 1, n);
}

vector<string> generateParenthesis(int n) {
    // want to use recursion and add either '(' or ')' depending on how many there already are        
    vector<string> v;
    helper(v, "", 0, 0, n);
   
   return v;
}
