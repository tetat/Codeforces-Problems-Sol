/// Problem Name: Journey Planning
/// Problem Link: https://codeforces.com/problemset/problem/1320/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  map <int, Long> m;
  map <int, Long>::iterator it;
  for (int i = 0;i < n;i++){
    cin >> el;
    m[el-i] += el;
  }
  Long ans = 0;
  for (it = m.begin();it != m.end();it++){
    ans = max(ans, it->second);
  }
  cout << ans << '\n';
  return 0;
}
