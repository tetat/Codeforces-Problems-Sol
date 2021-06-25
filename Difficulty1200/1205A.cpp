/// Problem Name: Almost Equal
/// Problem Link: https://codeforces.com/problemset/problem/1205/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool mark[200001];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n;
  cin >> n;
  if (n%2){
    cout << "YES" << '\n';
    cout << 1 << ' ';
    mark[1] = 1;
    for (int i = 4;i < n+n;i += 3){
      cout << i << ' ';
      mark[i] = true;
      i++;
      cout << i << ' ';
      mark[i] = true;
    }
    for (int i = 1;i <= n+n;i++){
      if (!mark[i]){
        cout << i;
        if (i != n+n)cout << ' ';
      }
    }
    cout << '\n';
  }else cout << "NO" << '\n';
  return 0;
}
