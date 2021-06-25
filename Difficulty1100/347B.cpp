/// Problem Name: Fixed Points
/// Problem Link: https://codeforces.com/problemset/problem/347/B

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
  cin >> n;
  vector <int> v;
  int pnt = 0;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el==i)pnt++;
    v.pb(el);
  }
  int extra = 1;
  if (pnt==n)extra = 0;
  for (int i = 0;i < n;i++){
    if (i != v[i]){
      if (v[v[i]]==i){
        extra = 2;
        break;
      }
    }
  }
  cout << pnt+extra << '\n';
  return 0;
}
