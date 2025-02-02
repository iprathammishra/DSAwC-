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
class Bi {
public:
  vector<ll>* g;
  vector<ll> pU, pV, dist;
  ll m, n;
  Bi(ll m, ll n): m(m), n(n) {
    g = new vector<ll>[m];
    pU = vector<ll>(m, -1);
    pV = vector<ll>(n, -1);
    dist = vector<ll>(m, -1);
  }
  void add(ll u, ll v) {
    g[u].push_back(v);
  } 
  bool bfs() {
    fill(begin(dist), end(dist), -1);
    queue<ll> q;
    for (ll u = 0; u < m; u++) {
      if (pU[u] == -1) {
        dist[u] = 0;
        q.push(u);
      }
    }
    bool okay = false;
    while (!q.empty()) {
      ll u = q.front(); q.pop();
      for (ll nei : g[u]) {
        if (pV[nei] == -1) 
          okay = true;
        else if (dist[pV[nei]] == -1) {
          dist[pV[nei]] = dist[u] + 1;
          q.push(pV[nei]);
        }
      }
    }
    return okay;
  }
  bool dfs(ll u) {
    for (ll nei : g[u]) {
      if (pV[nei] == -1 || (dist[pV[nei]] == dist[u] + 1 && dfs(pV[nei]))) {
        pU[u] = nei; pV[nei] = u; return true;
      }
    }
    dist[u] = -1; return false;
  }
  
  int maxMat() {
    ll res = 0;
    while (bfs()) {
      for (ll u = 0; u < m; u++) {
        if (pU[u] == -1 && dfs(u)) 
          res++;
      }
    }
    return res;
  }
};
int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    ll n; cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for (ll i = 0; i < n; i++) {
      for (ll j = 0; j < n; j++) {
        cin >> a[i][j];
      }
    }
    vector<vector<ll>> rev(n, vector<ll>(n+1, 0));
    for (ll i = 0; i < n; i++) {
      for (ll v = 1; v <= n; v++) {
        rev[i][v] = rev[i][v-1] + a[i][n-v];
      }
    }
    vector<vector<ll>> que(n+1);
    vector<bool> possi(n+1, false);
    for (ll v = 0; v <= n; v++) {
      possi[v] = false;
      for (ll i = 0; i < n; i++) {
        if (rev[i][v] == v) {
          que[v].push_back(i); possi[v] = true;
        }
      }
    }
    ll res = 0;
    for (ll m = n; m >= 0; m--) {
      if (m == 0) {
        res = 0; break;
      }
      bool ok = true;
      for (ll v = 0; v < m; v++) {
        if (v > n || !possi[v]) {
          ok = false; break;
        }
      }
      if (!ok) 
        continue;
      Bi bb(m, n);
      for (ll v = 0; v < m; v++) {
        for (ll qq : que[v]) {
          bb.add(v, qq);
        }
      }
      ll mat = bb.maxMat();
      if (mat == m) {
        res = m;
        break;
      } 
    }
    cout << res << endl;
  }
  return 0;
}