/// Problem Name: Banana
/// Problem Link: https://codeforces.com/problemset/problem/335/A

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
  int n;
  cin >> n;
  vector <int> m(26, 0), cnt(26, 0);
  int d = 0;
  for (int i = 0;i < s.size();i++){
    if (m[s[i]-97]==0)d++;
    m[s[i]-97]++;
    cnt[s[i]-97]++;
  }
  if (d > n)cout << "-1" << '\n';
  else {
    int tot = 1;
    string ans;
    vector <int> f(26, 0);
    for (int i = 0;i < 26;i++){
      if (m[i]){
        ans += i+97;
        m[i]--;
        f[i]++;
      }
    }
    while (ans.size() < n){
      int mx = 0;
      int po = -1;
      for (int i = 0;i < 26;i++){
        if (m[i]){
          int tmp = cnt[i]%f[i]?cnt[i]/f[i]+1:cnt[i]/f[i];
          if (mx < tmp){
            mx = tmp;
            po = i;
          }
        }
      }
      if (po == -1)break;
      int prev = cnt[po]%f[po]?(cnt[po]/f[po])+1:cnt[po]/f[po];
      while (m[po] > 0 && ans.size() < n){
        f[po]++;
        m[po]--;
        ans += po+97;
        int nxt = cnt[po]%f[po]?(cnt[po]/f[po])+1:cnt[po]/f[po];
        if (nxt < prev)break;
      }
    }
    for (int i = 0;i < 26;i++){
      if (f[i])tot = max(tot, (cnt[i]%f[i])?(cnt[i]/f[i])+1:cnt[i]/f[i]);
    }
    while (ans.size() < n)ans += s[0];
    cout << tot << '\n' << ans << '\n';
  }
  return 0;
}
