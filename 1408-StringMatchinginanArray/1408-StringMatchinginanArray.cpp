// Last updated: 7/26/2025, 10:17:05 AM
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        // learn robin karp algorithm of stirng matcing -> it will help to match the pattern with less time
        int n = words.size();
        // sort(words.begin(),words.end(),[](string a,string b){
        //     return a.size() < b.size();
        // });
        vector<string>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(words[j].find(words[i]) != string::npos){
                    s.push_back(words[i]);
                    break;
                }
            }
        }
        return s;
    }
};