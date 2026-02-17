// Last updated: 2/17/2026, 11:26:08 AM
1class Solution {
2public:
3
4    bool containsNearbyDuplicate1(vector<int>& nums, int k) {
5        // unordered map -> to store the element and its indices 
6        // window of size k+1 
7        unordered_map<int,int>m;
8        int n=nums.size();
9        for(int i=0;i<n;i++){
10            if(m.count(nums[i])){
11                if(abs(i-m[nums[i]]) <= k) return true;
12            }
13            m[nums[i]] = i;
14        }
15        return false;
16    }
17
18
19
20
21
22
23
24
25    bool containsNearbyDuplicate(vector<int>& nums, int k) {
26        unordered_map<int,int>count;
27        int n = nums.size();
28        int i=0,j=0;
29        while(j<n){
30            count[nums[j]]++; // count the frequency of each element within k 
31            if(count[nums[j]]>=2) return true; // if any element occure twice retrun true 
32
33            //if(j-i<k) j++; // if size is not reached then increase the j
34            if(j-i == k){ // if window size is reached then remove the ith place element 
35                count[nums[i]]--;
36                i++; // increase the i so that we move the window to next window size 
37                //j++;
38            }
39            j++;
40        }
41        return false; // if we dont get any element return false 
42    }
43};