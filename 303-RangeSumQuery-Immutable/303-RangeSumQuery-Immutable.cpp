// Last updated: 9/24/2025, 5:10:34 PM
class NumArray {
public:
    vector<int>range;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            range.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return range[right];

        return range[right]-range[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */