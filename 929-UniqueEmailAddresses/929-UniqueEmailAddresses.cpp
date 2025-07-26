// Last updated: 7/26/2025, 3:38:47 PM
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>s;
        for(auto x:emails){
            string t = "";
            int j = 0;
            int n = x.size();
            int flag = 1;
            while(j<n && x[j]!='@' ){
                if(x[j]=='+') flag = 0;
                if(flag && x[j]!='.') t+=x[j];
                j++;
            }
            t+=x[j];
            t+=x.substr(j+1);
            s.insert(t);
        }
        return s.size();
    }
};