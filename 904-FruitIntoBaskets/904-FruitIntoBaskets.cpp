// Last updated: 7/27/2025, 9:45:42 AM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        // you can use unordered_set -> use unordered map -> it will solve the problem 
        unordered_map<int, int> basket;  // fruit -> count
        int i = 0, j = 0;
        int max_size = 0;

        while (j < fruits.size()) {
            basket[fruits[j]]++;

            while (basket.size() > 2) {
                basket[fruits[i]]--;
                if (basket[fruits[i]] == 0) {
                    basket.erase(fruits[i]);
                }
                i++;
            }

            max_size = max(max_size, j - i + 1);
            j++;

        }
        return max_size;

        // unordered_set<int>s;// to store unique fruite of only two tree 
        // int i=0,j=0;
        // int n = fruits.size();
        // int max_size=0;
        // while(j<n){
        //     s.insert(fruits[j]);

        //     if(s.size()>2){
        //         s.erase(fruits[i]);
        //         i++;
        //     }

        //     int size = j-i+1;
        //     max_size = max(max_size,size);
        //     j++;
        // }
        // return max_size;

    }
};