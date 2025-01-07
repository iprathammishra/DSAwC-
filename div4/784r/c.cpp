#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    bool flag; bool go = true, go1 = true;
    bool pass = true;
    if (a[0] % 2 == 1) { pass = false; }
    for (int& i : a) {
      if (i % 2 == 0 && pass == false) { go1 = false; }
      else if (i % 2 == 1 && pass == true) { go1 = false; }  
    }
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) {
        if (i == 0) { flag = true; }
        else if (flag == true) { go = false; break; }
        flag = true;
      }
      else {
        if (i == 0) { flag = false; }
        else if (flag == false) { go = false; break; }
        flag = false;
      }
    }
    if (go || go1) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
  } 
  return 0;
}