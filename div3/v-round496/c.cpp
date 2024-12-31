#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  unordered_map<int, int> freq; 
  vector<long> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; freq[a[i]]++; }
  vector<long> container(31, 0); for (int i = 0; i <= 30; i++) { container[i] = pow(2, i); }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    bool flag = false;
    for (int j = 0; j <= 30; j++) {
      if (freq[container[j] - a[i]] >= 2 || (freq[container[j] - a[i]] == 1 && container[j] - a[i] != a[i])) { flag = true; continue; }
    }
    if (flag == false) { ans++; }
  }

  cout << ans << endl;
  return 0;
}