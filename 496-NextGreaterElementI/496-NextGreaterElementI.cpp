// Last updated: 7/28/2025, 8:12:37 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>m; // to map with next greater element 
        stack<int>s; // to find next greater element 

        for(int i = nums2.size()-1 ;i>=0;i--){// start form the last element 
            // if stack is not empty and top of the stack is less then nums2[i] pop it out -> as we only have to store the 
            // element which is greater then nums2[i] 
            while(!s.empty() && nums2[i]>= s.top()) s.pop();

            m[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }
        vector<int>v;
        for(auto x:nums1){
            v.push_back(m[x]);
        }
        return v;
        // vector<int>ans;
        // // intrate through the nums1 element 
        // for(auto x:nums1){
        //     bool flag = true;
        //     // find the elment in the nums2 array 
        //     auto it = find(nums2.begin(),nums2.end(),x);
        //     // find if any elemnt present with more value then x -> at index more then what we find out
        //     while(it<nums2.end()){
        //         if(*it > x){
        //             ans.push_back(*it);
        //             // if we fond out no need to add -1 
        //             flag = false;
        //             break;
        //         }
        //         it++;
        //     }
        //     // if we don't find the element greater then x add -1 
        //     if(flag){
        //         ans.push_back(-1);
        //     }
        // }
        // return ans;
    }
};