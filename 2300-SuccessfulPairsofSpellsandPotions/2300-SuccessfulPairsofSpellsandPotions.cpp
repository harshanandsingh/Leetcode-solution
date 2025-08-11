// Last updated: 8/11/2025, 11:18:10 PM
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // if we solve this problem -> with broute force solutin 
        // for i -> 0 to m 
        // for j -> 0 to n 
        // find spells[i]*potions[j] >= success count++;

        // we can solve this problem in m* log(n) time complexity 
        sort(potions.begin(),potions.end());
        
        long long int m = spells.size();
        long long int n = potions.size();
        vector<int>ans(m,0);
        for(int i=0;i<m;i++){

            long long int low = 0 , high = n-1;
            while(low <= high){
                long long int mid = low + (high - low)/2;
                if((long long int)potions[mid]*spells[i] >= success){
                    ans[i]=n-mid;
                    high = mid - 1;
                }
                else{
                    low = mid+1;
                }
            }
        }
        return ans;
    }
};