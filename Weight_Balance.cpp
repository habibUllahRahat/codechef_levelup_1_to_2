#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) begin(x), end(x)
#define rv(x) rbegin(x), rend(x)
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false), cin.tie(nullptr);

void solve() {
  int w1, w2, x1, x2, m;
  cin >> w1 >> w2 >> x1 >> x2 >> m;
  float per_month_increased = (float)(w2 - w1) / m;
  bool fulty = per_month_increased >= x1 && per_month_increased <= x2;
  cout << fulty << endl;
}
int main() {
  fastIO();
  int tc;
  cin >> tc;
  while (tc--)
    solve();
  return 0;
}
