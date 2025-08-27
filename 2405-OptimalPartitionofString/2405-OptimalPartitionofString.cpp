// Last updated: 8/27/2025, 9:48:42 AM
class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;

        int count = 1;
        for(auto x:s){
            if(st.find(x)!= st.end()){
                count++;
                st.clear();
            }
            st.insert(x);
        }
        return count;
    }
};