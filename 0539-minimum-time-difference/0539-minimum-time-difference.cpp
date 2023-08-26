class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(int i=0;i<timePoints.size();i++) {
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int minute = stoi(curr.substr(3,2));
            int totalTime = hours*60 + minute;
            minutes.push_back(totalTime);
        }
        sort(minutes.begin(), minutes.end());
        int mini = INT_MAX;
        for(int i=0;i<minutes.size()-1;i++) {
            int diff =  minutes[i+1] - minutes[i]; 
            mini = min(mini,diff);
        }
        // This is the very Important edge case where we might forgot about think of.
        int lastDiff1 = (minutes[0]+1440) - minutes[minutes.size()-1];
        int lastDiff2 = minutes[minutes.size()-1] - minutes[0];
        int lastDiff = min(lastDiff2, lastDiff1);
        mini = min(mini, lastDiff);
        return mini;
    }
};