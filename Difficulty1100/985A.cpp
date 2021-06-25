/// Problem Name: Chess Placing
/// Problem Link: https://codeforces.com/problemset/problem/985/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e4;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> mark(n+1, 0);
  for (int i = 0;i < n/2;i++){
    cin >> el;
    mark[el]++;
  }
  int ans1 = 0;
  int ans2 = 0;
  for (int i = 1, j = 2;i <= n;i += 2){
    if (mark[i]==0){
      while (j <= n && mark[j]==0)j += 2;
      ans1 += abs(i-j);
      j += 2;
    }
  }
  for (int i = 2, j = 1;i <= n;i += 2){
    if (mark[i]==0){
      while (j <= n && mark[j]==0)j += 2;
      ans2 += abs(i-j);
      j += 2;
    }
  }
  cout << min(ans1, ans2) << '\n';
  return 0;
}
