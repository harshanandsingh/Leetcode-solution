// Last updated: 7/19/2025, 5:20:40 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];// slow pointer 
            fast = nums[nums[fast]];// fast pointer 
        }while(slow != fast);

        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};