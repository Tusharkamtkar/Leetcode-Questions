class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int timeTkn = 0;

        int M_lastIdx = 0;
        int P_lastIdx = 0;
        int G_lastIdx = 0;

        for(int i = 0; i < garbage.size(); i++){

            for(int j = 0; j < garbage[i].size(); j++){

                if(garbage[i][j] == 'M'){
                    M_lastIdx = i;
                }
                else if(garbage[i][j] == 'P'){
                    P_lastIdx = i;
                }
                else{
                    G_lastIdx = i;
                }
                timeTkn++;
            }
        }

        for(int i = 1; i < travel.size(); i++){

            travel[i] += travel[i-1];
        }

        timeTkn += M_lastIdx > 0 ? travel[M_lastIdx-1] : 0;
        timeTkn += P_lastIdx > 0 ? travel[P_lastIdx-1] : 0;
        timeTkn += G_lastIdx > 0 ? travel[G_lastIdx-1] : 0;

        return timeTkn;
    }
};