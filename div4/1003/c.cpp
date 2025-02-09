#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);
template <typename T> void dbg(const T& x) { cerr << x; }
template <typename T, typename U> void dbg(const pair<T, U>& p) { cerr << "(" << p.first << ", " << p.second << ")"; }
template <typename T> void dbg(const vector<T>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const vector<vector<T>>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const set<T>& s) { cerr << "{"; for (auto it = s.begin(); it != s.end(); ++it) dbg(*it), cerr << (next(it) != s.end() ? ", " : ""); cerr << "}"; }
template <typename K, typename V> void dbg(const map<K, V>& m) { cerr << "{"; for (auto it = m.begin(); it != m.end(); ++it) dbg(*it), cerr << (next(it) != m.end() ? ", " : ""); cerr << "}"; }
template <typename T, typename... Args> void dbg(const T& arg, const Args&... args) { dbg(arg); if (sizeof...(args)) cerr << " | ", dbg(args...); }
#define bug(...) { cerr << "Line " << __LINE__ << ": "; dbg(__VA_ARGS__); cerr << endl; }
int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    ll n, m; cin >> n >> m;
    vector<ll> a(n); 
    for (auto& i : a)
      cin >> i;
    ll M; cin >> M;
    bool prevN = true, prev = true;
    bool ok = true;
    for (ll i = 1; i < n; i++) {
      bool curN = false, cur = false;
      if ((prevN && a[i-1] <= a[i]) || (prev && (M - a[i-1]) <= a[i]))
        curN = true;
      if ((prevN && a[i-1] <= (M-a[i])) || (prev && (M - a[i-1]) <= (M - a[i])))
        cur = true;
      if (!curN && !cur) 
        {ok = false; break;}
      prevN = curN; prev = cur;
    }
    ok ? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}
