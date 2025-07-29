// Last updated: 7/29/2025, 2:05:30 PM
class Solution {
public:
    string frequencySort(string s) {


        // we have to find out the frequency -> unordered_map 
        // now based on frequency -> we have sort the string in decending order  -> priority queue -> max heap 

        unordered_map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        // max heap -> most frequent elemnt is present at the top 
        priority_queue<pair<int,char>>pq;
        for(auto x:m){
            pq.push({x.second,x.first});
        }

        // now take the top element and add it in the answer 
        string ans = "";
        while(!pq.empty()){
            auto [a,b] = pq.top();
            pq.pop();
            ans+=string(a,b);
            // int i = 0;
            // while(i<a){
            //     ans+=string(1,b);
            //     i++;
            // }
        }
        return ans;

        // // use vector -> to find the meximum frequency 
        // vector<pair<char,int>>v;
        // // insert each element with 0 frequecy 
        // for(auto x:s){
        //     v.psuh_back({x,0});
        // }
    }
};