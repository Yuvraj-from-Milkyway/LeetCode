//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int i, j, s=1;
      for(i=1;i<=n;i++){
        s = ((i%2) != 0)? 1 : 0;
        for(j=1;j<=i;j++){
          cout << s << " ";
          s = (s==1)? 0: 1;
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