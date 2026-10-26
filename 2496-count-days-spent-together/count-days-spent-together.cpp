class Solution {
public:

    int finDayOfYear(string date, vector<int> &cummMonthDays){

        int month = stoi(date.substr(0,2));
        int days  = stoi(date.substr(3));

        return cummMonthDays[month - 1] + days;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        vector<int> monthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        vector<int> cummMonthDays(13, 0); // 13 is for 1=jan 2=fab

        cummMonthDays[1] = 31; // January

        for(int i = 2; i <= 12; i++){
            cummMonthDays[i] = cummMonthDays[i-1] + monthDays[i-1];
        }

        int arriveAliceDay = finDayOfYear(arriveAlice, cummMonthDays);
        int leaveAliceDay  = finDayOfYear(leaveAlice, cummMonthDays);
        int arriveBobDay   = finDayOfYear(arriveBob, cummMonthDays);
        int leaveBobDay    = finDayOfYear(leaveBob, cummMonthDays);

        int overLapDays = min(leaveAliceDay, leaveBobDay) - max(arriveAliceDay, arriveBobDay) + 1;

        return overLapDays < 0 ? 0 : overLapDays; 
    }
};