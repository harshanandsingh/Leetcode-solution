class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            if (flowerbed[i] == 0) {
                // Check left and right neighbors
                bool emptyLeft = (i == 0 || flowerbed[i - 1] == 0);
                bool emptyRight = (i == m - 1 || flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1;  // Plant a flower
                    count++;
                    
                    if (count >= n) return true; // No need to check further
                }
            }
        }

        return count >= n;
    }
};