class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> maxL(size);
        vector<int> maxR(size);
        maxL[0] = height[0];
        maxR[size-1] = height[size-1];
        for(int i=1;i<size;i++) {
            maxL[i] = max(maxL[i-1],height[i]);
        }
         for(int i=size-2;i>=0;i--) {
            maxR[i] = max(maxR[i+1],height[i]);
        }
        vector<int> water(size);
        // getting max and minL
        for(int i=0;i<size;i++) {
            water[i] += min(maxL[i], maxR[i]) - height[i];
        }
        int sum = 0;
        for(int i=0;i<size;i++) {
            sum += water[i];
        }
        return sum;
    }
};