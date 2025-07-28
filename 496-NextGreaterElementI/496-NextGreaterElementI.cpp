// Last updated: 7/28/2025, 7:51:51 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto x:nums1){
            bool flag = true;
            auto it = find(nums2.begin(),nums2.end(),x);
            while(it<nums2.end()){
                if(*it > x){
                    ans.push_back(*it);
                    flag = false;
                    break;
                }
                it++;
            }
            // if we don't find the element greater then x 
            if(flag){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};