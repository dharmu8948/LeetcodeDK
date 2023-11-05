//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
       // step 1: push all person into stack
       for(int i=0;i<n;i++) {
           st.push(i);
       }
       // step 2: run discard method to find single celebrity
       while(st.size() != 1) {
           int a = st.top(); st.pop();
           int b = st.top(); st.pop();
           
           // if a knows b
           if(M[a][b]) {
               // so a is not celebrity and b might be
               st.push(b);
           }else {
               // so b not a celebrity and a might be
               st.push(a);
           }
       }
       // step 3: check a single person is actual celebrity
       int isCelebrity = st.top(); st.pop();
       
       // Celebrity should not know anyone
       for(int i=0;i<n;i++) {
           if(M[isCelebrity][i] != 0 )
               return -1;
       }
       
        //every know the Celebrity except own, because He is Celebrity so he should be zero itself
       for(int i=0;i<n;i++) {
           if(M[i][isCelebrity] ==0 && i != isCelebrity)
               return -1;
       }
       
       return isCelebrity;
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends