#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  while (n--) {
    long l1, r1, l2, r2; cin >> l1 >> l2 >> r1 >> r2;
    array<long, 2> a = {r1, r2};
    cout << l1 << " "; 
    for (int i = 0; i < 2; i++) {
      if (a[i] != l1) { cout << a[i]; break; }
    }
    cout << endl; 
  }
  return 0;
}