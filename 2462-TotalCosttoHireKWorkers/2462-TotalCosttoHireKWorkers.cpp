// Last updated: 3/16/2026, 3:07:28 PM
1class Solution {
2public:
3    long long totalCost(vector<int>& costs, int k, int candidates) {
4        int n = costs.size();
5        // Min-heaps for the first and last 'candidates' workers
6        priority_queue<int, vector<int>, greater<int>> head_heap;
7        priority_queue<int, vector<int>, greater<int>> tail_heap;
8
9        int i = 0;
10        int j = n - 1;
11        long long total_cost = 0;
12
13        while (k--) {
14            // Fill head_heap up to 'candidates' size
15            while (head_heap.size() < candidates && i <= j) {
16                head_heap.push(costs[i++]);
17            }
18            // Fill tail_heap up to 'candidates' size
19            while (tail_heap.size() < candidates && i <= j) {
20                tail_heap.push(costs[j--]);
21            }
22
23            // Get the best options from both heaps
24            int t1 = head_heap.size() > 0 ? head_heap.top() : INT_MAX;
25            int t2 = tail_heap.size() > 0 ? tail_heap.top() : INT_MAX;
26
27            // Choose the cheaper worker. 
28            // If tied, the problem usually specifies the one with the lower index (head_heap).
29            if (t1 <= t2) {
30                total_cost += t1;
31                head_heap.pop();
32            } else {
33                total_cost += t2;
34                tail_heap.pop();
35            }
36        }
37
38        return total_cost;
39    }
40    long long totalCost1(vector<int>& costs, int k, int candidates) {
41        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >min_heap;
42
43        int i = 0 , j = costs.size()-1;
44        int n = costs.size();
45
46        long long sum = 0;
47
48
49        while(i<=j){
50            while(i<=j){
51                min_heap.push({costs[i],i});
52                i++;
53            }
54            while(i<=j){
55                min_heap.push({costs[j],j});
56                j--;
57            }
58            if(i>=candidates || j<= n-candidates) break;
59        }
60
61        while(i<=j){
62            sum += min_heap.top().first;
63            min_heap.pop();
64
65            k--;
66            if(k==0) break;
67
68            if(i<=j) min_heap.push({costs[i],i++});
69            if(i<=j) min_heap.push({costs[j],j--});
70        }
71
72        while(k--){
73            sum += min_heap.top().first;
74            min_heap.pop();
75        }
76
77        return sum;
78    }
79};