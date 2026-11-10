class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        int n = asteroids.size();

        sort(asteroids.begin(), asteroids.end());

        long long MASS = mass; // coz mass is added by astroid so it may get long

        for(int i = 0; i < n; i++){
            if(asteroids[i] > MASS){
                return false;
            }
            MASS += asteroids[i];
        }
        return true;
    }
};