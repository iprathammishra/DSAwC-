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
    vector<pair<ll, ll>> container;
    vector<vector<ll>> grid(n, vector<ll>(m, 0));
    for (ll i = 0; i < n; i++) {
      ll sum = 0;
      for (ll j = 0; j < m; j++) {
        cin >> grid[i][j];
        sum += grid[i][j];
      }
      container.push_back({sum, i});
    }
    sort(begin(container), end(container), [](const pair<ll, ll>& a, pair<ll, ll>& b) -> bool { return a.first > b.first;});

    vector<ll> F;
    for (auto& p : container) {
      F.insert(end(F), grid[p.second].begin(), grid[p.second].end());
    }
    vector<ll> pref; pref.push_back(F[0]);
    for (ll i = 1; i < (int)F.size(); i++) 
      pref.push_back(pref.back()+F[i]);
    ll res = 0;
    for (auto& i : pref)
      res += i;
    cout << res << endl;
  }
  return 0;
}
