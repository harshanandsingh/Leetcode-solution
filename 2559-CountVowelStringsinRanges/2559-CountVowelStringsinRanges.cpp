// Last updated: 7/28/2025, 9:35:05 AM
class Solution {
public:
    int start_end_vow(string s){
        char b = *(s.begin()), e = *(s.end()-1);
        if( (b == 'a' || b == 'e' || b == 'i' || b=='o' || b=='u')  && (e == 'a' || e == 'e' || e == 'i' || e== 'o' ||e== 'u') ){
            return 1;
        }
        return 0;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // find a function to find the string which is starting and ending wirh a vovel 
        int n = words.size();
        // vecotr to store prefix sum of all the vovel till that point 
        vector<int>v(n,0);
        int pre_sum=0;
        for(int i=0;i<n;i++){
            pre_sum += start_end_vow(words[i]);
            v[i] = pre_sum;
        }

        vector<int>ans;
        for(auto x:queries){
            int a ;
            if(x[0] != 0) a = v[x[1]] - v[x[0]-1];
            else a = v[x[1]];
            ans.push_back(a);
        }
        return ans;
    }
};