#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    ll n = (int)s.size();
    bool flag = false;
    for (int i = 0; i+1 < n; i++)
      if (s[i] == s[i+1]) 
        flag = true;
    flag ? cout << 1 << endl : cout << (int)s.size() << endl;
  }
  return 0;
}