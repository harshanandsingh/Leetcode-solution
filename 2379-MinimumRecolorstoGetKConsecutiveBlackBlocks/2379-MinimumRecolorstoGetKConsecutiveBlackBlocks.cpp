// Last updated: 7/27/2025, 6:17:05 AM
class Solution {
public:
    int minimumRecolors(string s, int k) {
        int n = s.size();

        int min_color = k; // min number of count
        int i=0,j=0;
        int count = 0;
        while(j<n){
            if(s[j]=='W') count++;

            if(j-i+1 == k){
                min_color = min(min_color , count);
                if(s[i]=='W') count--;
                i++;
            }

            j++;
        }
        return min_color;
        // int min_color = k;
        // int n = s.size();
        // int i=0,j=0,count=0;
        // while(j!=n){
        //     if(s[j]=='B') count++;
        //     if(j-i+1<k) j++;
        //     else if(j-i+1 == k){
        //         min_color = min(min_color,k-count);
        //         if(s[i]=='B'){
        //             count--;
        //         }
        //         j++;i++;
        //     }
        // }
        // return min_color;


        // int i = 0, cnt = 0, mn = INT_MAX;
        // for(int j=0; j<s.size(); j++)  {
        //     if(s[j] == 'W') cnt++;
            
        //     while(j - i + 1 > k) {
        //         if(s[i] == 'B') cnt--;
        //         i++;
        //     }

        //     if(j - i + 1 == k) mn = min(mn, cnt);
        // }
        // return mn;
    }
};