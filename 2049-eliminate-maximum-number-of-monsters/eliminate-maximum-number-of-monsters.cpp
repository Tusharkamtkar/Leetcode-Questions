class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        int n = dist.size();

        vector<int> time(n); // stores the time an monster takes to ra=each city

        for(int i = 0; i < n; i++){
            time[i] = ceil((float)dist[i] / speed[i]); // taking ceil value of time 
        }

        sort(time.begin(), time.end()); // storing iin order so that it is easy to tackel monsters

        int count = 1; // always 1 coz atleast 1 can be killed always
        int time_taked = 1; // for killing one and charging weapeon it will take 1 time always

        for(int i = 1; i < n; i++){

            if((time[i] - time_taked) <= 0){ // if it is true it means monstore reahes city

                return count;
            }

            count++;
            time_taked++;
        }

        return count;
    }
};