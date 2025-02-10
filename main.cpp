#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  int n; cin >> n;
  int sum = (n*(n+1))/2;
  int target = sum/2;
  vector<int> s1, s2;
  if (sum & 1)
    cout << "NO" << endl;
  else {
    for (int i = n; i >= 1; i--) {
      if (i <= target) 
        {s1.push_back(i); target -= i;}
      else
        s2.push_back(i);
    }
    cout << "YES" << endl;
    cout << (int)s1.size() << endl;
    for (auto& i : s1) cout << i << ' ';
    cout << endl << (int)s2.size() << endl;
    for (auto& i : s2) cout << i << " ";
    cout << endl;
  }
  return 0;
}