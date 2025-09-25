// Last updated: 9/25/2025, 10:02:07 AM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        int val;
        for(int i=0;i<n;i++){

            val = abs(nums[i]);
            if(nums[val-1]<0) return val;
            nums[val-1]=-nums[val-1];
        }
        return val;
    }


    int findDuplicate1(vector<int>& nums) {
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