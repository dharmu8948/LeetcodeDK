//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int countSetBit(int n) {
        int count =0;
        while(n>0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
	int is_bleak(int n)
	{
	    for(int i=n-29;i<=n;i++){
            if(i+countSetBit(i)==n){
                return 0;
            }
        }
        return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends