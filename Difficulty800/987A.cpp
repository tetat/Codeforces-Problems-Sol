/// Problem Name: Infinity Gauntlet
/// Problem Link: https://codeforces.com/problemset/problem/987/A

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  vector <string> v;
  v.pb("Power");
  v.pb("Time");
  v.pb("Space ");
  v.pb("Soul");
  v.pb("Reality");
  v.pb("Mind");
  vector <int> m(6, 0);
  int n;
  cin >> n;
  for (int i = 0;i < n;i++){
    string s;
    cin >> s;
    if (s=="purple")m[0]++;
    else if (s=="green")m[1]++;
    else if (s=="blue")m[2]++;
    else if (s=="orange")m[3]++;
    else if (s=="red")m[4]++;
    else m[5]++;
  }
  int k = 0;
  for (int i = 0;i < 6;i++){
    if (m[i]==0)k++;
  }
  cout << k << '\n';
  for (int i = 0;i < 6;i++){
    if (m[i]==0)cout << v[i] << '\n';
  }
  return 0;
}
