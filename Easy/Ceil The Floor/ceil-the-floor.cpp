//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

int getFloor(int arr[], int size, int target){
    int start = 0, end = size-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end -start)/2;
        if(arr[mid] <= target){
            ans = arr[mid];
            start = mid + 1;
        }
        else end = mid - 1;
    }
    return ans;
}
int getCeil(int arr[], int size, int target){
    int start = 0, end = size-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end -start)/2;
        if(arr[mid] >= target){
            ans = arr[mid];
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return ans;
}


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int,int> ans;
    sort(arr, arr+n);
    ans.first = getFloor(arr, n, x);
    ans.second = getCeil(arr, n, x);
    return ans;
}