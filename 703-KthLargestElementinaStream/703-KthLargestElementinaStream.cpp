// Last updated: 8/17/2025, 9:36:44 PM
class KthLargest {
public:
    priority_queue<int,vector<int>,greater<>>pq;
    int size;
    KthLargest(int k, vector<int>& nums){
        size = k;
        for(int j = 0;j<nums.size();j++){
            pq.push(nums[j]);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>size){
            pq.pop();
        }
        return pq.top();
    }
};

