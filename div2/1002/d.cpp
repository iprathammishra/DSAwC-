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
    ll n, s1, s2, m1, m2; cin >> n >> s1 >> s2 >> m1;
    vector<vector<int>> adj1(n+1), adj2(n+1);
    for (ll i = 0; i < m1; i++) {
      ll u, v; cin >> u >> v;
      adj1[u].push_back(v); adj1[v].push_back(u);
    }
    cin >> m2;
    for (ll i = 0; i < m2; i++) {
      ll u, v; cin >> u >> v;
      adj2[u].push_back(v); adj2[v].push_back(u);
    }
    vector<bool> okay(n+1, false);
    for (ll v = 1; v <= n; v++) {
      set<int> s(begin(adj2[v]), end(adj2[v]));
      for (int nei : adj1[v]) {
        if (s.count(nei)) {
          okay[v] = true; break;
        }
      }
    }
    const ll MAX = 1e18;
    vector<vector<ll>> dist(n+1, vector<ll>(n+1, MAX));
    dist[s1][s2] = 0;
    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<>> heap;
    heap.push({0, s1, s2});
    ll res = -1;
    while (!heap.empty()) {
      auto t = heap.top(); heap.pop();
      ll d = get<0>(t);
      int u = get<1>(t);
      int v = get<2>(t);
      if (d != dist[u][v])
          continue;
      if (u == v && okay[u]) {
        res = d;
        break;
      }
      for (ll nei_u : adj1[u]) {
        for (ll nei_v: adj2[v]) {
          ll nei_n = d + abs(nei_u - nei_v);
          if (nei_n < dist[nei_u][nei_v]) {
            dist[nei_u][nei_v] = nei_n;
            heap.push({nei_n, nei_u, nei_v});
          }
        }
      }
    }
    cout << res << endl;
  }
  return 0;
}