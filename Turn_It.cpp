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
  int u, v, a, s;
  cin >> u >> v >> a >> s;

  if (pow(v, 2) >= pow(u, 2) - 2ll * a * s)
    cout << "Yes" << nl;
  else
    cout << "No" << nl;
}

int main() {
  fastIO();
  int tc;
  cin >> tc;
  while (tc--)
    solve();
  return 0;
}

/*
$Start with: $V \ge \sqrt{U^2 - 2AS}
$Square both sides: $V^2 \ge (\sqrt{U^2 -2AS})^2
$The square and square root cancel out: $V^2 \ge U^2 - 2AS$
*/