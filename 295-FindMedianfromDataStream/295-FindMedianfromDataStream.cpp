// Last updated: 3/5/2026, 11:05:22 AM
1class MedianFinder {
2public:
3    // vector<int>v;
4    // int mid = 0;
5    priority_queue<int>left_max_heap;
6    priority_queue<int,vector<int>,greater<int>>right_min_heap;
7    MedianFinder() {
8        
9    }
10    
11    void addNum(int num) {
12        left_max_heap.push(num);
13
14        right_min_heap.push(left_max_heap.top());
15        left_max_heap.pop();
16
17        if(right_min_heap.size() > left_max_heap.size()){
18            left_max_heap.push(right_min_heap.top());
19            right_min_heap.pop();
20        }
21        // int n = v.size(); 
22        // // if array empty or even add 
23        // if(n==0 || n%2==0){
24        //     mid++;
25        // }
26        // v.push_back(num);
27    }
28    
29    double findMedian() {
30
31        if(left_max_heap.size()>right_min_heap.size()) return left_max_heap.top();
32
33        return (left_max_heap.top()+right_min_heap.top())/2.0;
34        // int n = v.size();
35        
36        // if(n==0) return -1;
37
38        // sort(v.begin(),v.end());
39        // if(n%2==0){
40        //     return (double)(v[mid-1]+v[mid])/2;
41        // }
42        // return v[mid-1];
43    }
44};
45
46/**
47 * Your MedianFinder object will be instantiated and called as such:
48 * MedianFinder* obj = new MedianFinder();
49 * obj->addNum(num);
50 * double param_2 = obj->findMedian();
51 */