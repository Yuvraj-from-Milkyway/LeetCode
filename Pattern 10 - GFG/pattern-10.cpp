//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        int i, j, s;
      for(i=0;i<(2*n-1);i++){
        s = i;
        if(i>(n-1)){ s = (2*n-i-2); }  // if row exceeds n or n-1 than reduce no of stars/j/cols by subt. from double of  n .
        for(j=0;j<=s;j++){
          cout << "* ";
        }
        cout << endl;
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