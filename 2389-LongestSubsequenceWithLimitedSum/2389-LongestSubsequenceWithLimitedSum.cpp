// Last updated: 9/10/2025, 1:02:02 PM
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& que) {
        int n = nums.size();
        int m = que.size();
        vector<int>ans(m);

        sort(nums.begin() , nums.end());

        for(int i=0;i<m;i++){
            int sum = 0;
            int j = 0;
            while(j<n){
                sum+=nums[j];
                if(sum > que[i]){
                    ans[i]=j;
                    break;
                }
                j++;
            }
            if(j==n) ans[i]=n;
        }
        return ans;
    }
};