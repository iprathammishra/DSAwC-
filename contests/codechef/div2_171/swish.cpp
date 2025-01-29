#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    int M, K; cin >> M >> K;
    string s; cin >> s;
    int count_s = 0;
    for (char& ch : s) { if (ch == 'S') count_s++; }
    int N = 0;
    if (count_s >= K) { N = M; }
    else { N = M + (K - count_s - 1); }
    cout << N << endl;
  }
  return 0;
}