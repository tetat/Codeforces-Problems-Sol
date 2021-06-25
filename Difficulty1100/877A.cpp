/// Problem Name: Alex and broken contest
/// Problem Link: https://codeforces.com/problemset/problem/877/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
  int n = s.size();
  vector <string> S;
  S.pb("Danil");
  S.pb("Olya");
  S.pb("Slava");
  S.pb("Ann");
  S.pb("Nikita");
  int cnt = 0;
  for (int i = 0;i < 5;i++){
    int L = 0;
    int R = S[i].size()-1;
    for ( ;R < n;R++, L++){
      string cm;
      for (int j = L;j <= R;j++)cm += s[j];
      if (cm==S[i])cnt++;
      if (cnt > 1)break;
    }
    if (cnt > 1)break;
  }
  if (cnt==1)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
