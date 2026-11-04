#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << (b >= n && (a + c) >= n ? "YES" : "NO") << endl;
  }
  return 0;
}