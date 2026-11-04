#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, p1[2], p2[3];
    cin >> a >> b >> p1[0] >> p1[1] >> p2[0] >> p2[1];
    int flag = 0;
    if ((p1[0] == a && p1[1] == b) || (p1[0] == b && p1[1] == a)) {
      flag = 1;
    } else if ((p2[0] == a && p2[1] == b) || (p2[0] == b && p2[1] == a)) {
      flag = 2;
    }
    cout << flag << endl;
  }
  return 0;
}