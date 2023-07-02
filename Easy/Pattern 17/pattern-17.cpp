//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0; i<n; i++){
            char ch = 'A';
            //space
            for(int j=1; j<n-i; j++)
                cout<<" ";
            //letter
            for(int j=0; j<=i; j++){
                cout<<ch;
                ch++;
            }
            ch--;
            for(int j = i; j>0; j--){
                ch--;
                cout<<ch;
            }
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