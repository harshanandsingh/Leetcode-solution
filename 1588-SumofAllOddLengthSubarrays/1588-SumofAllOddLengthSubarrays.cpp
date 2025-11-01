// Last updated: 11/1/2025, 12:35:16 PM
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int rS = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            int total = (i + 1) * (n - i);
            int oddCount = (total + 1) / 2;
            rS += arr[i] * oddCount;
        }
        return rS;
    }   
};