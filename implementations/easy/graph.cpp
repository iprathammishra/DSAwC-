#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  int ans = 0;
  vector<vector<int>> graph(n, vector<int>(n, -1));
  for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) { cin >> graph[i][j]; if (graph[i][j] == 1) { ans++; } } }
  cout << ans << endl;
  return 0;
}