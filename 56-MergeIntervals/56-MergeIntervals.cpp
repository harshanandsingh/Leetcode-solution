// Last updated: 7/19/2025, 6:02:59 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        vector<vector<int>>merge;
        sort(i.begin(),i.end()); // sort on the basis of the of the first element 

        // now merge them 
        for(auto x:i){
            // if vector is empty or last element of merge vector is less then present inervel 
            if(merge.empty() || merge.back()[1] < x[0]) merge.push_back(x);
            else merge.back()[1] = max(x[1],merge.back()[1]);
        }
        return merge;
    }
};