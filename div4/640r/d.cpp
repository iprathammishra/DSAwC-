#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int low = 0, high = n-1;
    bool other = false, go = true;
    int moves = 0, alice = 0, bob = 0, X = 0;
    int acount = 0, bcount = 0;
    while (low <= high && go) {
      moves++;
      if (other == false) {
        acount = 0;
        while (low <= high && acount <= bcount) {
          acount += a[low];
          low++;
        }
        alice += acount;
        if (acount <= bcount) { go = false; break; }
        other = true;
      }
      else {
        bcount = 0;
        while (low <= high && bcount <= acount) {
          bcount += a[high];
          high--;
        }
        bob += bcount;
        if (bcount <= acount) { go = false; break; }
        other = false;
      }
    }
    cout << moves << " " << alice << " " << bob << endl;

  }
  return 0;
}