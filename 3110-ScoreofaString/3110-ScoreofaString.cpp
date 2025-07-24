// Last updated: 7/24/2025, 10:07:50 PM
class Solution {
public:
    int scoreOfString(string s) {
        int  n = s.size();
        int sum = 0;
        for(int i = 0 ;i<n-1;i++){
            int a = s[i]-'a';
            int b = s[i+1]-'a';
            // cout<<a<<" "<<b<<endl;
            sum = sum + abs(a-b);
           
        }
        return sum;
    }
};