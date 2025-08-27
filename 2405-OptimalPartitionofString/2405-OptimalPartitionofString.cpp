// Last updated: 8/27/2025, 10:04:28 AM
class Solution {
public:
    int partitionString(string s) {
        vector<int>lastseen(26,-1);
        int cnt=0;
        int start=0;
        for(int i=0;i<s.size();i++){
            if(lastseen[s[i]-'a']>=start){
                cnt++;
                start=i;
            }
            lastseen[s[i]-'a']=i;
        }
        return cnt+1;
    }
};