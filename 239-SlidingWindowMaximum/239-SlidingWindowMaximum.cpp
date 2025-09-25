// Last updated: 9/25/2025, 11:55:56 AM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k){
        int n = arr.size();
        int i=0,j=0;
        deque<int>q;
        vector<int>ans;
        while(j<n){
            while(!q.empty() && q.back()<arr[j]) q.pop_back();
            q.push_back(arr[j]);

            if(j-i+1 == k){
                ans.push_back(q.front());
                if(arr[i]==q.front()) q.pop_front();
                i++;
            }
            j++;
        }
        return ans;
    }
    
    
    
    
    
    
    vector<int> maxSlidingWindow1(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0, j = 0;
    
        vector<int> v;           // stores final result
        vector<int> max_val;     // stores potential max elements in decreasing order
    
        while (j < n) {
            // Maintain decreasing order in max_val
            while (!max_val.empty() && max_val.back() < arr[j]) {
                max_val.pop_back();
            }
            max_val.push_back(arr[j]);
    
            // If window size < k, just move j
            
            if (j - i + 1 == k) {
                // Front of max_val is the max in the window
                v.push_back(max_val[0]);
    
                // If the element going out is the current max, remove it
                if (arr[i] == max_val[0]) {
                    max_val.erase(max_val.begin());
                }
    
                i++;
                
            }
            j++;
        }
    
        return v;
    }
};