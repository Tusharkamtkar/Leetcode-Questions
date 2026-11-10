class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        int n = asteroids.size();

        sort(asteroids.begin(), asteroids.end());

        long long MASS = mass;

        for(int i = 0; i < n; i++){
            if(MASS < asteroids[i]){
                return false;
            }
            MASS += asteroids[i];
        }
        return true;
    }
};