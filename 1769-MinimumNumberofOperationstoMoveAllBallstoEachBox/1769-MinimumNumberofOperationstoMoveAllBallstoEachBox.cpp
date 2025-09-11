// Last updated: 9/11/2025, 6:21:37 PM
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> ans(n, 0);

        int leftCount = 0, leftOps = 0;
        for (int i = 0; i < n; i++) {
            ans[i] += leftOps;
            if (boxes[i] == '1') {
                leftCount++;
            }
            leftOps += leftCount;
        }

        int rightCount = 0, rightOps = 0;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] += rightOps;
            if (boxes[i] == '1') {
                rightCount++;
            }
            rightOps += rightCount;
        }

        return ans;
    }
};
