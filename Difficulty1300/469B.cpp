/// Problem Name: Chat Online
/// Problem Link: https://codeforces.com/problemset/problem/469/B

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

const int N = 1e6;

bool mark[2001];

int main()
{
  FastIO();
  int tc, ca = 0;
  int p, q, l, r;
  cin >> p >> q >> l >> r;
  int a, b;
  for (int i = 0;i < p;i++){
    cin >> a >> b;
    for ( ;a <= b;a++){
      mark[a] = true;
    }
  }
//  for (int i = 1;i <= 25;i++){
//    if (mark[i])cout << "1 ";
//    else cout << "0 ";
//  }cout << '\n';
  vector <pair <int, int> > v(q);
  for (int i = 0;i < q;i++){
    cin >> v[i].first >> v[i].second;
  }
  int t = l;
  int ans = 0;
  while (t <= r){
    int cnt = 0;
    for (int i = 0;i < q;i++){
      for (int j = v[i].first+t;j <= v[i].second+t;j++){
        if (mark[j]){
          cnt++;
          break;
        }
      }
      if (cnt)break;
    }
    ans += cnt;
    t++;
  }
  cout << ans << '\n';
  return 0;
}
