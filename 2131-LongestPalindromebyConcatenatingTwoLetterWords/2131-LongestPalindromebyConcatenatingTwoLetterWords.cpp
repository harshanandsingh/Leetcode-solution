// Last updated: 8/26/2025, 9:53:13 PM
class Solution {
public:
    int longestPalindrome(vector<string>& words){

        unordered_map<string,int>m;
        for(auto x:words) m[x]++;

        bool center = false;
        int ans = 0;

        for(auto [a,b]:m){

            string rev = string(a.rbegin() , a.rend());

            if(a == rev){
                // symmetric word like "gg"
                ans += (b / 2) * 4; // if we have aa aa -> we can use it other then center 
                if(b % 2) center = true; // one can sit in the middle
            }
            else if(m.count(rev)){
                cout<<a<<" "<<b<<" "<<endl;
                int min_v = min(m[a],m[rev]);
                ans+=min_v*4;
                m[a]=0;
                m[rev]=0;
            }
        }
        if(center) ans+=2;
        return ans;
    }
};