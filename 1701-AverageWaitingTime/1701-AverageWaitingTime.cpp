// Last updated: 7/28/2025, 12:41:53 PM
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        // if i know a person before me has to wait x unit of time 
        // then i have to wait -> x + my_time - (my_arivel - his_arivel)

        int n = c.size();

        vector<int>time_each_person;

        time_each_person.push_back(c[0][1]);

        for(int i=1;i<n;i++){
            int arivel = c[i][0];
            int time = c[i][1];
            int last_a = c[i-1][0];

            int total_time_ith_person =  time_each_person.back() - ( arivel - last_a);
            cout<<total_time_ith_person<<" ";
            total_time_ith_person >0 ? time_each_person.push_back(total_time_ith_person + time) : time_each_person.push_back(time);
        }


        long long int sum = 0;
        for(auto x:time_each_person){
            sum+=x;
        }
        return double(sum)/n;


    }
};