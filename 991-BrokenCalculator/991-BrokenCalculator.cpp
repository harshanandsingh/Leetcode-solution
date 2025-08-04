// Last updated: 8/4/2025, 5:32:11 PM
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int res = 0;
        while (target > startValue) {
            if (target % 2 == 0) {
                target /= 2;
            } else {
                target += 1;
            }
            res++;
        }
        return res + (startValue - target);
    }
};
