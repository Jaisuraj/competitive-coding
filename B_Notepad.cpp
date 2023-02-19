#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // dp[i] represents the minimum number of operations needed to type the first i characters of the string
    int dp[200005];
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
      // Option 1: Append the character to the end of the string
      dp[i] = dp[i - 1] + 1;

      // Option 2: Copy a continuous substring and paste it to the end of the string
      for (int j = 1; j <= i; j++) {
        if (s[i - j] == s[i]) {
          dp[i] = min(dp[i], dp[i - j] + 1);
        }
      }
    }

    if (dp[n] < n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
