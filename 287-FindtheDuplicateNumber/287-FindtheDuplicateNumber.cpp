// Last updated: 12/27/2025, 12:49:39 PM
1class Solution {
2public:
3    // using binery search
4    bool possible(int mid,vector<int>& nums){
5        int count = 0;
6        for(auto x:nums){
7            if(x<=mid) count++;
8        }
9        return count>mid;
10    }
11    int findDuplicate(vector<int>& nums) {
12        int low = 1 , high = nums.size()-1;
13        int ans = high;
14        while(low<=high){
15            int mid = low + (high - low)/2;
16            if(possible(mid,nums)){
17                high = mid-1;
18                ans = mid;
19            }else{
20                low = mid+1;
21            }
22        }
23        return ans;
24    }
25
26    int findDuplicate2(vector<int>& nums) {
27
28        int n = nums.size();
29        int val;
30        for(int i=0;i<n;i++){
31
32            val = abs(nums[i]);
33            if(nums[val-1]<0) return val;
34            nums[val-1]=-nums[val-1];
35        }
36        return val;
37    }
38
39
40    int findDuplicate1(vector<int>& nums) {
41        int n = nums.size();
42
43        int slow = nums[0];
44        int fast = nums[0];
45
46        do{
47            slow = nums[slow];// slow pointer 
48            fast = nums[nums[fast]];// fast pointer 
49        }while(slow != fast);
50
51        slow = nums[0];
52        while(slow != fast){
53            slow = nums[slow];
54            fast = nums[fast];
55        }
56        return slow;
57    }
58};