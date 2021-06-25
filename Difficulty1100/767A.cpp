/// Problem Name: Snacktower
/// Problem Link: https://codeforces.com/problemset/problem/767/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  vector <int> mark(n+1, 0);
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  int dec = n;
  for (int i = 0;i < n;i++){
    mark[v[i]] = 1;
    while (dec > 0 && mark[dec]){
      cout << dec << ' ';
      dec--;
    }cout << '\n';
  }
  return 0;
}
