// Last updated: 9/9/2025, 9:00:35 AM
class Solution {
public:

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // unordered map -> to store the element and its indices 

        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(m.count(nums[i])){
                if(abs(i-m[nums[i]]) <= k) return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }








    bool containsNearbyDuplicate1(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int n = nums.size();
        int i=0,j=0;
        while(j<n){
            count[nums[j]]++; // count the frequency of each element within k 
            if(count[nums[j]]>=2) return true; // if any element occure twice retrun true 

            if(j-i<k) j++; // if size is not reached then increase the j
            else if(j-i == k){ // if window size is reached then remove the ith place element 
                count[nums[i]]--;
                i++; // increase the i so that we move the window to next window size 
                j++;
            }
        }
        return false; // if we dont get any element return false 
    }
};