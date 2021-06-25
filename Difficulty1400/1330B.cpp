/// Problem Name: Dreamoon Likes Permutations
/// Problem Link: https://codeforces.com/problemset/problem/1330/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> markp(n+1, 0);
    vector <int> marks(n+1, 0);
    vector <int> pref(n+1, 0);
    vector <int> suf(n+1, 0);
    vector <int> v;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    int cnt = 0;
    int mx = 0;
    for (int i = 0;i < n;i++){
      if (markp[v[i]]==0){
        mx = max(mx, v[i]);
        markp[v[i]]++;
        cnt++;
        if (cnt==mx)pref[i+1] = 1;
      }else break;
    }
    cnt = 0;
    mx = 0;
    for (int i = n-1;i >= 0;i--){
      if (marks[v[i]]==0){
        mx = max(mx, v[i]);
        marks[v[i]]++;
        cnt++;
        if (cnt==mx)suf[i+1] = 1;
      }else break;
    }
    vector <pair <int, int> > w;
    for (int i = 1;i < n;i++){
      if (pref[i] && suf[i+1]){
        w.pb(mp(i, n-i));
      }
    }
    int k = w.size();
    cout << k << '\n';
    for (int i = 0;i < k;i++){
      cout << w[i].first << ' ' << w[i].second << '\n';
    }
  }
  return 0;
}
