// Last updated: 4/29/2025, 2:59:43 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        sort(people.begin(),people.end());

        int i=0,j=n-1;
        int count=0;
        while(i<=j){
            if(people[i]+people[j] > limit){
                j--;
                count++;
            }
            else{
                j--;
                i++;
                count++;
            }
        }
        return count;
    }
};