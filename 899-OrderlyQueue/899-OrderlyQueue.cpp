// Last updated: 7/3/2025, 4:22:43 PM
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        } 
        string r=s;
        for(int i=1;i<s.size();i++){
            string t =s.substr(i)+s.substr(0,i);
            r=min(r,t);
        }
        return r;
    }
};