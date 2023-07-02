//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1; i<=n; i++){
        //number
        for(int j=1; j<=i; j++)
            cout<<j<<" ";
        
        //space
        for(int j=0; j<2*(n - i); j++)
            cout<<"  ";
            
        //number
        for(int j=i; j>0; j--)
            cout<<j<<" ";
            
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