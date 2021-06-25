/// Problem Name: Gourmet Cat
/// Problem Link: https://codeforces.com/problemset/problem/1154/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
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
  string s = "ffrcfcr";
  vector <int> v(26, 0);
  int a, b, c;
  cin >> a >> b >> c;
  Long cut = min(int(a/3), min(int(b/2), int(c/2)));
  a -= cut*3;
  b -= cut*2;
  c -= cut*2;
  Long ans = cut*7;
  Long mx = 0;
  for (int i = 0;i < s.size();i++){
    v['f'-97] = a;
    v['r'-97] = b;
    v['c'-97] = c;
    Long cnt = 0;
    int j = i;
    int zero = 0;
    while (true){
      if (v[s[j]-97]==0)break;
      v[s[j]-97]--;
      j = (j+1) % 7;
      cnt++;
    }
    mx = max(mx, cnt);
  }
  cout << ans+mx << '\n';
  return 0;
}
