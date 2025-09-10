// Last updated: 9/10/2025, 11:56:58 PM
class SummaryRanges {
public:
    map<int,int>m;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        int left=value , right=value;
        // find the first interval with start > value
        auto jb = m.upper_bound(value);

        auto jp = jb;
        if(jb != m.begin()){
            auto jp = prev(jb);
            if (jp->second >= value) return; // already covered
            if(jp->second+1 == value) left = jp->first;
        }

        if(jb != m.end() && jb->first == value+1){
            right = jb->second;
            m.erase(jb);
        }

        m[left]=right;

    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>ans;

        for(auto [a,b]:m){
            ans.push_back({a,b});
        }
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */