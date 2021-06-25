/// Problem Name: Phoenix and Beauty
/// Problem Link: https://codeforces.com/problemset/problem/1348/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, k, el;
    cin >> n >> k;
    vector <int> v;
    vector <int> mark(n+1, 0);
    int d = 0;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
      if (mark[el]==0)d++;
      mark[el]++;
    }
    if (d > k)cout << "-1" << '\n';
    else {
      int baki = k - d;
      for (int i = 1;i <= n;i++){
        if (mark[i]==0 && baki){
          v.pb(i);
          baki--;
          mark[i] = 1;
        }
      }
      vector <int> ad;
      for (int i = 1;i <=  n;i++){
        if (mark[i])ad.pb(i);
      }
      vector <int> ans;
      int len = ad.size();
      for (int i = 0;i < n;i++){
        for (int j = 0;j < len;j++){
          ans.pb(ad[j]);
        }
      }
      len = ans.size();
      cout << len << '\n';
      for (int i = 0;i < len;i++){
        cout << ans[i] << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
