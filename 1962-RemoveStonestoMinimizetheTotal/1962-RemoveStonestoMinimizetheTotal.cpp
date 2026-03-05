// Last updated: 3/5/2026, 11:29:08 AM
1class Solution {
2public:
3    int minStoneSum(vector<int>& piles, int k) {
4
5        if(piles.empty()) return 0;
6
7        priority_queue<int>max_heap;
8
9        for(auto x:piles) max_heap.push(x);
10
11        while(k--){
12            int a = max_heap.top();
13            max_heap.pop();
14            max_heap.push(ceil(a/2.0));
15        }
16        int sum = 0;
17        while(!max_heap.empty()){
18            sum+=max_heap.top();
19            max_heap.pop();
20        }
21        return sum;
22
23    }
24};