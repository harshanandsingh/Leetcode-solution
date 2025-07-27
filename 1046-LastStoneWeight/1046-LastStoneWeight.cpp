// Last updated: 7/27/2025, 8:26:13 PM
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        // its a max heap -> so the one with highest weight will be present at the top of the list 
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        // now take first two element out and push the abs value in the pq
        // if priority queue size is only 1 return that element 
        while(pq.size()>=2){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            pq.push(abs(b-a));
        }
        return pq.top();

    }
};