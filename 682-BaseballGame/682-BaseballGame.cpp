// Last updated: 8/15/2025, 10:06:12 PM
class Solution {
public:
    int calPoints(vector<string>& opr) {
        stack<int>s;
        
        for(string x:opr){
            if (isdigit(x[0]) || x.size() > 1) {  // Handles positive and negative numbers
                s.push(stoi(x));  
            }
            else if (x == "+") {
                if (s.size() >= 2) {
                    int a = s.top(); s.pop();
                    int b = s.top();
                    s.push(a); 
                    s.push(a + b);
                }
            } 
            else if(x=="C"){
                if (!s.empty()) s.pop();
            }
            else if(x=="D") if (!s.empty()) s.push(2 * s.top());
        }
        int sum=0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};