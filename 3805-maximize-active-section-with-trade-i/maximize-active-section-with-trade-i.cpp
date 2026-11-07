class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        
        int n = s.size();

        int onesCount = count(s.begin(), s.end(), '1');

        vector<int> zeroBlockSizes;

        int i = 0;

        while(i < n){
            if(s[i] == '0'){
                int start = i;

                while(i < n && s[i] == '0'){
                    i++;
                }
                zeroBlockSizes.push_back(i - start);
            }
            else{
                i++;
            }
        }
        
        int maxPairSum = 0;

        for(int i = 1; i < zeroBlockSizes.size(); i++){
            maxPairSum = max(maxPairSum, zeroBlockSizes[i] + zeroBlockSizes[i-1]);
        }

        return maxPairSum + onesCount;
    }
};