/// Problem Name: WeirdSort
/// Problem Link: https://codeforces.com/problemset/problem/1311/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, m, el;
    vector <int> v;
    vector <int> mark(101, 0);
    cin >> n >> m;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    for (int i = 0;i < m;i++){
      cin >> el;
      mark[el-1] = 1;
      //mark[el] = 1;
    }
    int L = 0;
    int R = 0;
    while (R < n && L < n){
      while (mark[L] == mark[R] && R < n)R++;
      if (mark[L])sort(v.begin()+L, v.begin()+R+1);
      L = R;
    }
    string ans = "YES";
    for (int i = 1;i < n;i++){
      if (v[i-1] > v[i]){
        ans = "NO";
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
