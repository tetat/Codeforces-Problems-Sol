/// Problem Name: Johnny and His Hobbies
/// Problem Link: https://codeforces.com/problemset/problem/1362/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n,  el;
    cin >> n;
    //vector <int> m1(1025, 0);
    vector <int> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
      //m1[v[i]]++;
    }
    sort(v.begin(), v.end());
    int ans = -1;
    for (int i = 1;i <= 2048;i++){
      //vector <int> m2(1025, 0);
      vector <int> a;
      for (int j = 0;j < n;j++){
        int p = v[j]^i;
        a.pb(p);
      }
      sort(a.begin(), a.end());
      bool ok = true;
      for (int j = 0;j < n;j++){
        if (a[j] != v[j]){
          ok = false;
          break;
        }
      }
      if (ok){
        ans = i;
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
