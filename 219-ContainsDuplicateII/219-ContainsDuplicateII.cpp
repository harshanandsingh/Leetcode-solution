class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
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