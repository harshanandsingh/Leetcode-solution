class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return compare_string(s)==compare_string(t);
    }
    string compare_string(string &s){
        string res="";
        for(char x:s){
            if(x=='#' ) {
                if( !res.empty()) res.pop_back();
            }
            else res+=x; 
        }
        cout<<res<<endl;
        return res;
    }
};