// Last updated: 7/28/2025, 9:39:50 AM
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        int size = words.size();
        vector<int> pre(size, 0);


        for(int i = 0; i < words.size(); i++){
            int sz = words[i].size();
            if((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') && (words[i][sz-1] == 'a' || words[i][sz-1] == 'e' || words[i][sz-1] == 'i' || words[i][sz-1] == 'o' || words[i][sz-1] == 'u')){
                pre[i] = 1;
            }
            if(i > 0)
            pre[i] += pre[i-1];
        }

        vector<int> res;

        for(int i = 0; i < queries.size(); i++){
            int l = queries[i][0];
            int r = queries[i][1];
            
            int ans = 0;
            ans = pre[r];
            if(l > 0) ans -= pre[l-1];
            
            res.push_back(ans);
        }

        return res;

    }
};