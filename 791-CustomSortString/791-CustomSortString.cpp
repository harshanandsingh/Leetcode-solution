// Last updated: 7/29/2025, 3:01:10 PM
class Solution {
public:
    bool cmp(const pair<int, pair<int, char>> &a, const pair<int, pair<int, char>> &b) {
        return a.first < b.first;
    }
    string customSortString(string order, string s) {
        // 1. we need position 
        // 2. we need frequency 
        // 3. char 

        // size of an order array -> which contain only unique element 
        int n = order.size();
        // to store the index of charector in order string 
        vector<int>v(26,0);
        for(int i = 0;i<n;i++){
            v[order[i] - 'a'] = i;
        }
        // now we have the postion on the basis of which we have to sort 

        // find the frequency of the char in main string s 
        unordered_map<char,int>m;
        for(auto x:s){
            m[x]++;
        }

        // now we have to push each lement in the vector with its position , frequency , and char 
        vector<pair<int, pair<int , char>>>e;
        for(auto x:m){
            char ch = x.first;
            int a = x.second;
            e.push_back( { v[ch-'a'] , {a , ch} });
        }

        // sort element based on pasition 
        sort(e.begin(),e.end());

        string ans = "";
        for(auto x:e){
            auto [a,b] = x;

            ans+= string(b.first,b.second);
        }
        return ans;

    }
};