class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        int count = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for(int i=0;i<seats.size();i++) {
            count += abs(students[i] - seats[i]);
        }
        return count;
    }
};