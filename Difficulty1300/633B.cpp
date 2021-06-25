/// Problem Name: A Trivial Problem
/// Problem Link: https://codeforces.com/problemset/problem/633/B

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

vector <Long> p;
void make_power(){
  Long in = 5;
  Long five = 5;
  for (int i = 0;i < 10;i++){
    p.pb(in);
    in *= five;
  }
}

vector <Long> ans[N*3];
void make_ans(){
  Long mx = 0;
  for (Long i = 1;i <= N*5;i++){
    Long zero = 0;
    for (int j = 0;j < p.size();j++){
      zero += Long(i/p[j]);
    }
    ans[zero].pb(i);
    //mx = max(mx, zero);
  }
  //cout << mx << '\n';
}

int main()
{
  FastIO();
  int tc, ca = 0;
  make_power();
  make_ans();
  Long n;
  cin >> n;
  int k = ans[n].size();
  cout << k << '\n';
  for (int i = 0;i < k;i++){
    cout << ans[n][i];
    if (i != k-1)cout << ' ';
    else cout << '\n';
  }
  return 0;
}
