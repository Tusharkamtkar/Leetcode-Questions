class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string longestPref = strs[0];
        int prefLen = longestPref.length();

        for(int i=1;i<n;i++){
            string s =strs[i];
            // int m=s.length();
            // int j=0;
            while(prefLen>=0 && longestPref!=s.substr(0,prefLen)){
                prefLen--;
                if(prefLen==0)return "";
                longestPref=longestPref.substr(0,prefLen);
                // j++;
            }
        }
    return longestPref;}
};