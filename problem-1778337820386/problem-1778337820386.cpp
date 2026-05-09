// Last updated: 5/9/2026, 8:13:40 PM
1class Solution {
2public:
3    vector<int> scoreValidator(vector<string>& events) {
4        int counter = 0;
5        int score = 0;
6        int i=0;
7        int n = events.size();
8        while(i<n && counter<10){
9            if (events[i] == "W") {
10                counter++;
11            } 
12            else if (events[i] == "WD" || events[i] == "NB") { // Changed WB to WD
13                score += 1;
14            } 
15            else {
16                // According to the prompt, these will be "0", "1", "2", "3", "4", or "6"
17                score += stoi(events[i]);
18            }
19            i++; 
20        }
21        return {score,counter};
22    }
23};