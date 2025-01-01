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
vector<bool> sieve(const int& n) {
  vector<bool> primes(n+1, true); primes[0] = primes[1] = true;
  for (int i = 2; i < (int) pow(n, 0.5); i++) { 
    if (primes[i] == true) { for (int j = i*i; j <= n; j += i) { primes[j] = false; } }
  }
  return primes;
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  vector<bool> primes = sieve(100);
  int low = 0, high = 0, running = 0;
  int ans = 0;
  while (high < n) {
    running += a[high];
    if (high - low + 1 == k) {
      if (primes[running] == true) { ans++; }
      running -= a[low];
      low++;
    }
    high++;
  }

  cout << ans << endl;
  return 0;
}