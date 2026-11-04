#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, s_limit, maxRating = 0;
    cin >> n >> s_limit;
    while (n--) {
      int s, r;
      cin >> s >> r;
      if (s <= s_limit && r > maxRating) {
        maxRating = r;
      }
    }
    cout << maxRating << endl;
  }
  return 0;
}