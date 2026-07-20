// Last updated: 7/20/2026, 2:38:13 PM
1// Overlapping Approach
2class Solution {
3private:
4    vector<string> convert(string sentence){
5        sentence += " ";
6        vector<string> ans;
7
8        string word = "";
9        for(int i=0;i<sentence.size();i++){
10            if(sentence[i]==' '){
11                ans.push_back(word);
12                word="";
13            }
14            else{
15                word += sentence[i];
16            }
17        }
18
19        return ans;
20    }
21public:
22    bool areSentencesSimilar(string x, string y) {
23        // we want x to always be longest to avoid else-if conditions
24        if (x.length() < y.length()) {
25            swap(x, y);
26        }
27
28        // first store the words from sentences
29        vector<string> vx, vy;
30        vx = convert(x);
31        vy = convert(y);
32
33        int l = 0;
34        // we will try to match words from prefix part
35        for(int i = 0; i < vy.size(); i++) {
36            if(vx[i] == vy[i]) {
37                l++;
38            }
39            else {
40                break;
41            }
42        }
43
44        int ind = vx.size() - 1, r=vy.size();
45        // we will try to match words from suffix part
46        for(int i=vy.size()-1; i>=0; i--){
47            if(vy[i] == vx[ind]){
48                ind--;
49                r=i;
50            }
51            else{
52                break;
53            }
54        }
55
56        // if they overlaps
57        return r <= l;
58    }
59};