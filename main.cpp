#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  long long n; cin >> n;
  if (n & 1) { cout << ((n/2)*((n/2)+1))-(((n/2)+1)*((n/2)+1)) << endl; }
  else { cout << ((n/2)*((n/2)+1))-((n/2)*(n/2)) << endl; }
  return 0;
}