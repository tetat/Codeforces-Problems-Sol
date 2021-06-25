/// Problem Name: Amr and The Large Array
/// Problem Link: https://codeforces.com/problemset/problem/558/B

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

const int N = 1e6;

vector <int> v[N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  int mx = 0;
  for (int i =  1;i <= n;i++){
    cin >> el;
    v[el].pb(i);
    mx = max(mx, int(v[el].size()));
  }
  int L = 1;
  int R = n+1;
  for (int i = 1;i <= N;i++){
    if (mx == v[i].size()){
      if (R-L > v[i][v[i].size()-1]-v[i][0]){
        L = v[i][0];
        R = v[i][v[i].size()-1];
        mx = v[i].size();
      }
    }
  }
  cout << L << ' ' << R << '\n';
  return 0;
}
