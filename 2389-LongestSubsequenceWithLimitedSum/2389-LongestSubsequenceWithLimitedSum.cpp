// Last updated: 9/10/2025, 1:18:23 PM
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); ++i)
            nums[i] += nums[i - 1];

        vector<int> ans;
        for (auto query : queries)
        {
            int idx = binarySearch(nums, query);
            ans.push_back(idx);
        }

        return ans;
    }

    int binarySearch(vector<int>& arr, int target)
    {
        int left = 0, right = arr.size();

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            
            if ( arr[mid] == target )
                return mid + 1;
            
            if ( arr[mid] > target )
                right = mid;
            else
                left = mid + 1;
        }

        return left;
    }
};