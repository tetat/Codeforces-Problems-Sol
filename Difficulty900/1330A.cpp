/// Problem Name: Dreamoon and Ranking Collection
/// Problem Link: https://codeforces.com/problemset/problem/1330/A

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
  cin >> tc;
  while (tc--){
    int n, x, el;
    cin >> n >> x;
    vector <int> v;
    vector <int> mark(202, 0);
    for (int i = 0;i < n;i++){
      cin >> el;
      mark[el]++;
    }
    int ans = 0;
    int d = 1;
    while (x){
      if (mark[d]==0){mark[d]++;x--;}
      while (mark[d] && d <= 200)d++;
      ans = d-1;
    }
    cout << ans << '\n';
  }
  return 0;
}
