// Last updated: 3/17/2026, 3:39:07 PM
1class Solution {
2public:
3    int largestInteger(int num) {
4
5        priority_queue<int>e;
6        priority_queue<int>o;
7
8        int nums = num;
9
10        while(nums){
11            int r = nums%10;
12
13            if(r%2==0) e.push(r);
14            else o.push(r);
15            nums /= 10;
16
17        }
18        int ans = 0;
19        string s = to_string(num);
20        int n = s.size();
21        for(int i=0;i<n;i++){
22            if((s[i]-'0') %2==0){
23                ans = ans*10 + e.top();
24                e.pop();
25            }else{
26                ans = ans*10 + o.top();
27                o.pop();
28            }
29        }
30        return ans;
31    }
32};