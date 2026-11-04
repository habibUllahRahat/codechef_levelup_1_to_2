#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) begin(x), end(x)
#define rv(x) rbegin(x), rend(x)
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false), cin.tie(nullptr);

void solve() {
  float s, a, b, c;
  cin >> s >> a >> b >> c;
  float cnged_price = (c / 100) * s;
  s = s + cnged_price;
  cout << (s >= a && s <= b ? "Yes" : "No") << endl;
}
int main() {
  fastIO();
  int tc;
  cin >> tc;
  while (tc--)
    solve();
  return 0;
}
