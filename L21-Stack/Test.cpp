#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int flag = -1;
    vector<int> a(n + 1, 0), b(n + 1, 0);

    for (int i = 0; i < n; i++) {
      if (s[i] == 'G') {
        a[i + 1] = (a[i] + 1);
        b[i + 1] = (b[i] + 1);
        if (flag == -1) {
          flag = i;
        }
      } else {
        a[i + 1] = a[i];
        b[i + 1] = (b[i] + 2);
      }
    }

    if (flag == -1) {
      cout << "YES" << endl;

    } else {
      bool check;

      if ((a[n] - a[flag + 1]) <= k) {
        check = true;
      } else {
        check = false;
      }

      int g = 0;
      int c{}, d{};
      for (int i = flag + 1; (i < n) and (!check); i++) {
        if (s[i] == 'G') {
          int x = (a[n] - a[i + 1]), y = (b[n] - b[i + 1]);

          if (y > k) {
            c = (y - k);
          } else {
            c = 0;
          }

          if (y < (k - g)) {
            d = y;
          } else {
            d = (k - g);
          }

          if ((c <= d) and ((x > 0) or ((c % 2) == 0) or (c < d))) {
            check = true;
          } else {
            g++;
          }
        }
      }

      if (check) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
}