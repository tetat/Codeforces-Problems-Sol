/// Problem Name: Substrings Sort
/// Problem Link: https://codeforces.com/problemset/problem/988/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool cmp(pair <string, int> a, pair <string, int> b){
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <pair <string, int> > S;
  string in;
  for (int i = 0;i < n;i++){
    cin >> in;
    S.pb(mp(in, in.size()));
  }
  sort(S.begin(), S.end(), cmp);
//  for (int i = 0;i < n;i++){
//    cout << S[i].first << '\n';
//  }
  string ans = "YES";
  for (int i = n-1;i > 0;i--){
    for (int j = 0;j < i;j++){
      int R = S[j].second-1;
      int L = 0;
      bool ok = true;
      while (R < S[i].second){
        string cm;
        for (int k = L;k <= R;k++){
          cm += S[i].first[k];
        }
        if (S[j].first == cm){
          ok = false;
          break;
        }
        L++;
        R++;
      }
      if (ok){
        ans = "NO";
        break;
      }
    }
    if (ans == "NO")break;
  }
  cout << ans << '\n';
  if (ans == "YES"){
    for (int i = 0;i < n;i++){
      cout << S[i].first << '\n';
    }
  }
  return 0;
}
