// Last updated: 9/24/2025, 12:30:52 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m_e = nums[0];
        int count = 0;
        int n = nums.size();

        int i=0;
        while(i<n){
            if(nums[i] == m_e) count++;
            else{
                count--;
                if(count == 0){
                    m_e = nums[i];
                    count++;
                }
            }
            i++;
        }
        return m_e;
    }
    // int majorityElement(vector<int>& nums) {
    //     int n=nums.size();
    //     map<int,int>m;
    //     for(int i=0;i<nums.size();i++) m[nums[i]]++;
    //     for(auto x:m){
    //         if(x.second > n/2) return x.first;
    //     }
    //     return -1;
    // }
};