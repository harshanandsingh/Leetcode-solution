// Last updated: 7/27/2025, 9:11:04 PM
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        
        // make a max heap -> store max element at the top 
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }

        // do the following opereation k times 
        for(int i=0;i<k;i++){
            int a = pq.top();
            //cout<<a<<" ";
            pq.pop();
            pq.push((int)sqrt(a));
        }
        //cout<<endl;
        // find the sum af all the remaning one 
        long long  sum = 0;
        int size = pq.size();
        for(int i=0;i<size;i++){
            //cout<<pq.top()<<" ";
            sum+=pq.top();
            pq.pop();
        }
        return sum;


    }
};