#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, s, maxDiff;
    cin >> n >> s;
    cout << ((s <= n) ? s : ((n * 2) - s)) << endl;
  }
  return 0;
}