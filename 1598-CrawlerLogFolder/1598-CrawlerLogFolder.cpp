// Last updated: 8/15/2025, 10:00:08 PM
class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        int ans=0;
        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i]=="./") ;
            else if(logs[i]=="../"){if(ans>0)ans--; else ;}
            else ans++;
        }
        return ans;
    }
};