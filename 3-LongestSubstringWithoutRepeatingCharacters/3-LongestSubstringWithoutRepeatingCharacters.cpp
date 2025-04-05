// Last updated: 4/5/2025, 11:37:59 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /*int i = 0, j = 0, ans = 0;
        string s1 = "";
        while (j < s.length()) {
            if (s1.find(s[j]) == -1) {
                s1 += s[j];
                j++;
            } 
            else {
                //cout<<s1<<endl;
                if(s1.length()>ans) ans=s1.length();
                int a = s1.find(s[j]);
                s1.erase(0, a+1);
                s1+=s[j];
                j++;
            }
        }
        if(s1.length()>ans) ans=s1.length();
        return ans;*/

        // int n = s.size();
        // int i=0,j=0;
        // int max_len = 0;
        // unordered_map<char,int>m;
        // while(j<n){
        //     if(m.find(s[j])!=m.end()){
        //         max_len = max(max_len,j-i);
        //         if(m[s[j]]+1 > i ) i = m[s[j]]+1;
        //         //cout<<max_len<<" "<<endl;
        //         //cout<<i<<" "<<j<<" "<<endl;
        //     }
        //     m[s[j]]=j;
        //     j++;
        // }
        // max_len = max(max_len,j-i);
        // return max_len;


        unordered_map<char,int>m;
        int i=0,j=0,ans=0;
        int n = s.size();

        while(j<n){
            m[s[j]]++;

            while(m[s[j]]>1){
                m[s[i]]--;
                i++;
            }

            int window_size = j-i+1;
            ans = max(ans,window_size);
            j++;
        }
        return ans;
    }
};