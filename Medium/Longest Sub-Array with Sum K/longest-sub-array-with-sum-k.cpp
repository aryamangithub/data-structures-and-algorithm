//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map <int, int> preSumMax;
        int sum = 0;
        int maxlen = 0;
        for(int i=0; i<N; i++){
            sum += A[i];
            if(sum == K) {
                maxlen = max(maxlen, i+1);
            }
            int rem = sum - K;
            if(preSumMax.find(rem) != preSumMax.end()){
                int len = i - preSumMax[rem];
                maxlen = max(maxlen, len);
            }
            if(preSumMax.find(sum) == preSumMax.end()){
                preSumMax[sum] = i;
            }
        }
        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends