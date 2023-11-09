class Solution {
      vector<int> prevSmallerElement(vector<int> &heights) {
        int n = heights.size();
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=0 ; i < n ; i++) {
            while(st.top() != -1 && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> nextSmallerElements(vector<int> &heights) {
        int n = heights.size();
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=n-1 ; i >= 0 ; i--) {
            while(st.top() != -1 && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = INT_MIN;
        // find next smaller element
        vector<int> next = nextSmallerElements(heights);

        // find prev smaller elements
        vector<int> prev = prevSmallerElement(heights);

        int size = heights.size();
        for(int i=0;i<size;i++) {
            int len = heights[i];
            if(next[i] == -1) {
                next[i] = size;
            }
            int width = next[i] - prev[i] - 1;
            int area = len * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
       vector<vector<int>> v;
       int n = matrix.size();
       int m = matrix[0].size();
       for(int i=0;i<n;i++) {
           vector<int> temp;
           for(int j = 0;j<m;j++) {
               temp.push_back(matrix[i][j] - '0');
           }
           v.push_back(temp);
       }
       int area = largestRectangleArea(v[0]);
       for(int i=1;i<n;i++) {
           for(int j=0;j<m;j++) {
               // let's update current row with previous value
               if(v[i][j]) {
                   v[i][j] += v[i-1][j];
               }else {
                   v[i][j] = 0;
               }
           }
           area = max(area, largestRectangleArea(v[i]));
       }
       return area; 
    }
};