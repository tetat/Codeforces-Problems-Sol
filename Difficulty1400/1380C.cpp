/// Problem Name: Create The Teams
/// Problem Link: https://codeforces.com/problemset/problem/1380/C

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

const int N = 1e4;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, x;
    cin >> n >> x;
    vector <Long> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    Long cnt = 1;
    int ans = 0;
    for (int i = n-1;i >= 0;i--){
      if (cnt*v[i] >= x){
        ans++;
        cnt = 1;
      }else cnt++;
    }
    cout << ans << '\n';
  }
  return 0;
}
