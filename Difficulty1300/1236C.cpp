/// Problem Name: Labs
/// Problem Link: https://codeforces.com/problemset/problem/1236/C

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
  int n, el;
  cin >> n;
  vector <int> v[n];
  int d = 1;
  int g = 1;
  for (int i = 0;i < n;i++){
    for (int j = (d==1?0:n-1);j >= 0 && j < n;j += d){
      v[j].pb(g);
      g++;
    }
    d==1?d=-1:d=1;
  }
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      cout << v[i][j] << ' ';
    }cout << '\n';
  }
  return 0;
}
