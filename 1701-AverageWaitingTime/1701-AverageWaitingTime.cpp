// Last updated: 7/28/2025, 1:01:33 PM
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
    
        int n = c.size();

        // there is more easy way to solve this problem 
        // find cooking time for each person and then genereat the waiting time 
        long long int totla_time = 0,cooking_time=0;
        for(auto x:c){
            long long int arivel = x[0];
            long long int time = x[1];

            cooking_time = max(cooking_time,arivel); // to find cook is free or not 
            // if arivel > cooking time -> cook is free 
            // if cooking time > arivel -> cook is busy with other person food prepration 

            cooking_time +=time; // now for ith person cooking time will be earlier cooking time + ith person time for cooking 

            totla_time += cooking_time - arivel;
        }
        return (double)totla_time / n;
        // vector<int>time_each_person;

        // // at first the chef will always be free -> so add that time 
        // time_each_person.push_back(c[0][1]);

        // for(int i=1;i<n;i++){
        //     int arivel = c[i][0];
        //     int time = c[i][1];
        //     int last_a = c[i-1][0];
        //     // now when new person come , he will check that the server is free or not 
        //     // which can be find out by past_person_waiting_time - afer what time i came 
        //     int total_time_ith_person =  time_each_person.back() - ( arivel - last_a);
        //     cout<<total_time_ith_person<<" ";
        //     // if its -ve so server is free otherwise sercer is busy so add my time also 
        //     total_time_ith_person >0 ? time_each_person.push_back(total_time_ith_person + time) : time_each_person.push_back(time);
        // }


        // long long int sum = 0;
        // for(auto x:time_each_person){
        //     sum+=x;
        // }
        // return double(sum)/n;


    }
};