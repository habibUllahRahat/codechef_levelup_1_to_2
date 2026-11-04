#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int x;
    cin >> x;
    if (x < 100) {
      cout << "Easy";
    } else if (x < 200) {
      cout << "Medium";
    } else {
      cout << "Hard";
    }
    cout << endl;
  }
  return 0;
}