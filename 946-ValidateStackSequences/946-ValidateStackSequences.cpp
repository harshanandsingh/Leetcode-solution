// Last updated: 8/16/2025, 1:25:52 AM
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // what i observe that , the element inserted before the first pop will always in same order 
        // like for 1 2 3 4 5  , if pop order is like 3 4 5 2 1 , so 2 1 will always be in same oeder of poping out
        
        // first lets obtain the order of insertion -> in stack 
        
        // ex -> 1 2 3 
        // 3 1 2 -> you can never be able to pop 1 and 2 from stack as you insert 1 2 3 , and you are removing 
        // 3 , so your top of the stack will always be 2 and you can never pop 1 before 2 

        // ex 2 -> 1 2 3 4
        // 1 3 4 2 -> yes this is possinble 
        // you insert 1 2 3 4 , you pop 1 out , so top of stack 2 , you insert 3 , top 3 , pop 3 , top 2 , inser 4 , pop 4 
        // pop 2 
        stack<int>s;
        int i=0;
        for(auto x:pushed){
            s.push(x);
            while(i<popped.size() && !s.empty() && popped[i]==s.top()){
                i++;
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        return s.empty();

    }
};