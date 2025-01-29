#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a%b); }
int lcm(int a, int b) { return a*b/gcd(a, b); }
pair<int, int> getRatio(int a, int b) {
  int g = gcd(a, b);
  a = a/g;
  b = b/g;
  return make_pair(a, b);
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string s; cin >> s;
    map<pair<int, int>, int> mmap;
    int dCount = 0, kCount = 0;
    for (char& ch : s) {
      if (ch == 'D') dCount++; 
      else kCount++;
      cout << ++mmap[getRatio(dCount, kCount)] << " ";
    }
    cout << endl; 
  }
  return 0;
}