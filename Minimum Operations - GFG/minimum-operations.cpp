//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
         if(n==0 || n==1) return n;
         
        // recursive approach
        /*
        if(n%2==0) return 1 + minOperation(n/2);
        else       return 1 + minOperation(n-1);
        */
        
        // Iterative Approach
        int count = 0;
        while(n>0) {
            if(n%2 == 0 && n>2) {
                n = n/2;
            }else {
                n--;
            }
            count++;
        }
        return count;
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
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends