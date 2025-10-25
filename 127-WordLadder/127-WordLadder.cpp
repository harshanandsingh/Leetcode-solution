// Last updated: 10/25/2025, 11:47:27 AM
class Solution {
public:
    int ladderLength(string start, string end, vector<string>& wordList) {
        //queue -> for bfs 
        int m = start.size();
        queue<string>q; // for bfs traversal 
        unordered_map<string,int>vis; // for visited string 
        unordered_set<string>wl(wordList.begin(),wordList.end()); // for fast search 
        q.push(start);
        vis[start]=1;
        int steps = 1;
        
        while(!q.empty()){
            int n = q.size();
            while(n--){
                string s = q.front();
                q.pop();

                if(s==end) return steps;

                for(int i=0;i<s.size();i++){

                    char ori = s[i];

                    for(auto x:"abcdefghijklmnopqrstuvwxyz"){

                        s[i]=x;
                        // if(vis[s]) continue;
                        //
                        
                        if(!vis[s] && wl.count(s)){
                            if(s==end) return steps+1;
                            q.push(s);
                            vis[s]=1;
                        }
                        
                    }
                    s[i]=ori;
                }
            }
            steps++;
        }
        return 0;
    }
};