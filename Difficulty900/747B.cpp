/// Problem Name: Mammoth's Genome Decoding
/// Problem Link: https://codeforces.com/problemset/problem/747/B

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
  int n, el;
  string s;
  cin >> n >> s;
  if (n%4 == 0){
    vector <pair <int, char> > v;
    v.pb(mp(0, 'A'));
    v.pb(mp(0, 'C'));
    v.pb(mp(0, 'G'));
    v.pb(mp(0, 'T'));
    for (int i = 0;i < n;i++){
      if (s[i] == 'A')v[0].first++;
      if (s[i] == 'C')v[1].first++;
      if (s[i] == 'G')v[2].first++;
      if (s[i] == 'T')v[3].first++;
    }
    sort(v.begin(), v.end());
    if (v[3].first * 4 > n)s = "===";
    else {
      int eq = n/4;
      for (int i = 0;i < 4;i++){
        int baki = eq-v[i].first;
        char ch = v[i].second;
        for (int j = 0;j < n && baki;j++){
          if (s[j] == '?'){
            s[j] = ch;
            baki--;
          }
        }
      }
    }
  }
  else s = "===";
  cout << s << '\n';
  return 0;
}
