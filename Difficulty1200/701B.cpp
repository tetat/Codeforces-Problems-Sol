/// Problem Name: Cells Not Under Attack
/// Problem Link: https://codeforces.com/problemset/problem/701/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool row[N+1];
bool col[N+1];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, m;
  cin >> n >> m;
  Long ans = n*n;
  Long x, y;
  Long r = 0;
  Long c = 0;
  Long cnt = 0;
  vector <Long> a;
  for (int i = 0;i < m;i++){
    cin >> x >> y;
    int two = 0;
    if (row[x]==false){
      ans -= (n-c);
      row[x] = true;
      two++;
      r++;
    }
    if (col[y]==false){
      ans -= (n-r);
      col[y] = true;
      two++;
      c++;
    }
    if (two==2)cnt++;
    a.pb(ans);
  }
  for (int i = 0;i < m;i++){
    cout << a[i];
    if (i != m-1)cout << ' ';
  }cout << '\n';
  return 0;
}
