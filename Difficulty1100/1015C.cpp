/// Problem Name: Songs Compression
/// Problem Link: https://codeforces.com/problemset/problem/1015/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;

class data {
public:
  int a;
  int b;
};

bool cmp0(data a, data b){
  return a.b < b.b;
}

bool cmp1(data a, data b){
  return a.a > b.a;
}

bool cmp(data a, data b){
  return a.a-a.b > b.a-b.b;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m, el;
  cin >> n >> m;
  Long sum = 0;
  data songs[n];
  for (int i = 0;i < n;i++){
    cin >> songs[i].a >> songs[i].b;
    sum += songs[i].a;
  }
  sort(songs, songs+n, cmp);
  int L = 0;
  int R = 0;
//  while (R < n){
//    while (R < n && songs[L].b == songs[R].b)R++;
//    sort(songs+L, songs+R, cmp);
//    L = R;
//  }
  int ans = 0;
  //cout << sum << '\n';
  //if (sum > m){
    for (int i = 0;i < n;i++){
      if (sum > m){
        sum -= songs[i].a;
        sum += songs[i].b;
        ans++;
      }else break;
    }
  //}
  if (sum > m)ans = -1;
  cout << ans << '\n';
  return 0;
}
