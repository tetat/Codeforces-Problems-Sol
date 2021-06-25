/// Problem Name: World Cup
/// Problem Link: https://codeforces.com/problemset/problem/931/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int rnd = 1;
vector <int> mark(260, 0);
void rec(vector <int> &v, int len){
  //cout << "test" << '\n';
  if (len==2)return;
  //cout << "test" << '\n';
  for (int i = 0;i < len;i += 2){
    if (mark[v[i]] && mark[v[i+1]])return;
  }
  rnd++;
  //cout << "test" << '\n';
  vector <int> nxt;
  for (int i = 0;i < len;i += 2){
    if (mark[v[i]])nxt.pb(v[i]);
    else nxt.pb(v[i+1]);
  }
  rec(nxt, len/2);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, a, b;
  cin >> n >> a >> b;
  vector <int> v;
  mark[a] = 1;
  mark[b] = 1;
  for (int i = 0;i < n;i++){
    v.pb(i+1);
  }
  rec(v, n);
  int len = 1;
  int two = 2;
  while (two < n){
    len++;
    two += two;
  }
  string ans = "Final!";
  if (len > rnd)ans = (rnd+48);
  cout << ans << '\n';
  return 0;
}
