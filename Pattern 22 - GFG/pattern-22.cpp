//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        int i, j, r, s = (2*n-1);
        for(i=0;i<(2*n-1);i++){
            r = i;
            if(r>(n-1)){
              r = (2*n)-i-2;
              s += 4;
            }
            for(j=0;j<r;j++){
              cout << n-j << " ";
            }
            for(j=0;j<s;j++){
              cout << n-r << " ";
            }
            s -= 2;
            for(j=r-1;j>=0;j--){
              cout << n-j << " ";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends