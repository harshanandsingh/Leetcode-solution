// Last updated: 7/29/2026, 3:47:14 PM
1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        int n = arr.size();
5        int i = n-1;
6        int max = -1;
7        
8        while(i>=0){
9            int temp = max;
10            if(arr[i]>max) max = arr[i];
11            arr[i]=temp;
12            i--;
13        }
14        return arr;
15    }
16};