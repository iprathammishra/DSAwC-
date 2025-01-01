#include <bits/stdc++.h>
using namespace std;
template <typename T> void dbg(const T& x) { cerr << x; }
template <typename T, typename U> void dbg(const pair<T, U>& p) { cerr << "(" << p.first << ", " << p.second << ")"; }
template <typename T> void dbg(const vector<T>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const vector<vector<T>>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const set<T>& s) { cerr << "{"; for (auto it = s.begin(); it != s.end(); ++it) dbg(*it), cerr << (next(it) != s.end() ? ", " : ""); cerr << "}"; }
template <typename K, typename V> void dbg(const map<K, V>& m) { cerr << "{"; for (auto it = m.begin(); it != m.end(); ++it) dbg(*it), cerr << (next(it) != m.end() ? ", " : ""); cerr << "}"; }
template <typename T, typename... Args> void dbg(const T& arg, const Args&... args) { dbg(arg); if (sizeof...(args)) cerr << " | ", dbg(args...); }
#define TRACE(args...) { cerr << "Line " << __LINE__ << ": "; dbg(args); cerr << endl; }
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  int sum = 0;
  vector<int> b(n, 0);
  vector<int> c = a;
  sort(c.begin(), c.end(), [](const int& a, const int& b) -> bool {
    return a > b;
  });
  for (int i = 0; i < k; i++) {
    int val = c[i];
    sum += val;
    for (int i = 0; i < n; i++) {
      if (a[i] == val && b[i] == 0) { b[i] = 1; break; }
    }
  }
  vector<int> index; int count = 0;
  for (int i = 0; i < n; i++) {
    if (b[i] == 1) { index.push_back(count+1); count = 0;}
    else { count++; }
  }
  cout << sum << endl; 
  int i_sum = 0;
  for (int i = 0; i < (int) index.size()-1; i++) {
    cout << index[i] << " ";
    i_sum += index[i];
  }
  cout << n - i_sum << endl;

  return 0;
}