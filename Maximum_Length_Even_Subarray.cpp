#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) begin(x), end(x)
#define nl '\n'
#define fastIO()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(nullptr)

#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

void solve() {
  ll n;
  cin >> n;
  ll ans = (n * (n + 1)) / 2;
  cout << (ans % 2 == 0 ? n : n - 1) << nl;
}
int main() {
  fastIO();
  int tc;
  cin >> tc;
  while (tc--)
    solve();
  return 0;
}
