//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=0; i<n; i++) {
            //space
            for(int j=0; j<i; j++)
                cout<<" ";
            
            //star
            for(int k=0; k<2*n - (2*i+1); k++)
                cout<<"*";
                
            //space
            for(int j=0; j<i; j++)
                cout<<" ";
            
            cout<<endl;
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends