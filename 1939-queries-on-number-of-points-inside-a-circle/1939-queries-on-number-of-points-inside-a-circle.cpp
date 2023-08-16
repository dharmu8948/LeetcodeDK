class Solution {
public:
    static constexpr int x = 0;
    static constexpr int y = 1;
    static constexpr int radius = 2;
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        std::vector<int> answers;
        // There can be more than one point in the same coordinates
        // Otherwise using set would be enough
        std::map<std::vector<int>, int> points_count;

        for (auto p: points) {
            auto same_point = points_count.find(p);
            if (same_point != points_count.end()) {
                same_point->second++;
            } else {
                points_count[p] = 1;
            }
        }
  
        for (auto q: queries) {
            int count = 0;

            auto lower_x = points_count.lower_bound({q[x]-q[radius], q[y]-q[radius]});
            auto upper_x = points_count.upper_bound({q[x]+q[radius]+1, q[y]+q[radius]+1});

            for (auto p=lower_x; p!=upper_x; p++) {
                int dx = p->first[x] - q[x];
                int dy = p->first[y] - q[y];
                if ((dx*dx + dy*dy) <= q[radius]*q[radius]) {
                    count += p->second;
                }
            }

            answers.push_back(count);
        }

        return answers;
        
    }
};