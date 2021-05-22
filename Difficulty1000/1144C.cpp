/// Problem Name: Two Shuffled Sequences
/// Problem Link: https://codeforces.com/problemset/problem/1144/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 2e5;
vector <int> mark(N+1, 0);

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    mark[el]++;
  }
  string ans = "YES";
  for (int i = 0;i <= N;i++){
    if (mark[i] > 2){
      ans = "NO";
      break;
    }
  }
  if (ans == "NO")cout << ans << '\n';
  else {
    vector <int> in;
    vector <int> de;
    for (int i = 0;i <= N;i++){
      if (mark[i]){
        in.pb(i);
        mark[i]--;
      }
    }
    for (int i = N;i >= 0;i--){
      if (mark[i]){
        de.pb(i);
      }
    }
    cout << ans << '\n';
    int len = in.size();
    cout << len << '\n';
    for (int i = 0;i < len;i++){
      cout << in[i];
      if (i != len-1)cout << ' ';
    }cout << '\n';
    len = de.size();
    cout << len << '\n';
    for (int i = 0;i < len;i++){
      cout << de[i];
      if (i != len-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
