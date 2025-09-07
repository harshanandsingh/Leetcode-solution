// Last updated: 9/7/2025, 10:29:45 AM
class Solution {
public:
    unordered_map<int , vector<int>> m;
    Solution(vector<int>& nums) {
        int n=nums.size();
        for(int i =0 ;i<n;i++){
            m[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {

        int n = m[target].size();
        int randIndex = rand() % n;   // pick a random index
        return m[target][randIndex];
        // int count = 0;
        // int n = m[target].size();
        // int i=0;
        // int result;
        // while(i<n){
        //     count++;
        //     // element find the random inded b/w 0 to ith index in nums 
        //     // it give j 
        //     // if this j < k , then we can change the vlaue of bucket[j]=current value 
        //     int j = rand() % count ;
        //     if( j < 1) result = m[target][j];
        //     i++;
        // }
        // return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */