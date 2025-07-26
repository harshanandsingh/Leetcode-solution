// Last updated: 7/26/2025, 4:24:00 PM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int m = f.size();
    vector<int> v(m, 0);

    // Mark blocked positions
    for (int i = 0; i < m; i++) {
        if (f[i] == 1) {
            v[i] = 1;
            if (i > 0) v[i - 1] = 1;
            if (i < m - 1) v[i + 1] = 1;
        }
    }

    // Try to plant flowers
    for (int i = 0; i < m; i++) {
        if (v[i] == 0) {
            v[i] = 1; // plant
            n--;
            if (i < m - 1) v[i + 1] = 1; // block next spot
            if (n == 0) return true;
        }
    }

    return n <= 0;
        // int m = flowerbed.size();
        // int count = 0;

        // for (int i = 0; i < m; i++) {
        //     if (flowerbed[i] == 0) {
        //         // Check left and right neighbors
        //         bool emptyLeft = (i == 0 || flowerbed[i - 1] == 0);
        //         bool emptyRight = (i == m - 1 || flowerbed[i + 1] == 0);

        //         if (emptyLeft && emptyRight) {
        //             flowerbed[i] = 1;  // Plant a flower
        //             count++;
                    
        //             if (count >= n) return true; // No need to check further
        //         }
        //     }
        // }

        // return count >= n;
    }
};