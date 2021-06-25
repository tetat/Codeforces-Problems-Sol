/// Problem Name: Sonya and Exhibition
/// Problem Link: https://codeforces.com/problemset/problem/1004/B

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

const int N = 1e5;

int main()
{
  faster();
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  vector <pair <int, int> > seg(m);
  for (int i = 0;i < m;i++){
    cin >> seg[i].first >> seg[i].second;
  }
  string s;
  for (int i = 0;i < n;i++){
    if (i%2)s += '0';
    else s += '1';
  }
  cout << s << '\n';
  return 0;
}
