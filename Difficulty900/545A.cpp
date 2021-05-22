/// Problem Name: Toy Cars
/// Problem Link: https://codeforces.com/problemset/problem/545/A

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
  vector <int> good;
  for (int i = 0;i < n;i++){
    bool ok = true;
    for (int j = 0;j < n;j++){
      cin >> el;
      if (el==1 || el==3){
        ok = false;
      }
    }
    if (ok)good.pb(i+1);
  }
  int len = good.size();
  cout << len << '\n';
  for (int i = 0;i < len;i++){
    cout << good[i];
    if (i != len-1)cout << ' ';
  }cout << '\n';
  return 0;
}
