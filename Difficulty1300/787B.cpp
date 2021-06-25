/// Problem Name: Not Afraid
/// Problem Link: https://codeforces.com/problemset/problem/787/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int ab(int n){
  return n<0?-n:n;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, q;
  cin >> n >> q;
  string ans = "NO";
  while (q--){
    int k, el;
    cin >> k;
    vector <int> neg_mark(n+1, 0);
    vector <int> pos_mark(n+1, 0);
    for (int i = 0;i < k;i++){
      cin >> el;
      if (el < 0)neg_mark[-el]++;
      else pos_mark[el]++;
    }
    bool rm = false;
    for (int i = 1;i <= n;i++){
      if (neg_mark[i] && pos_mark[i]){
        rm = true;
        break;
      }
    }
    if (!rm)ans = "YES";
  }
  cout << ans << '\n';
  return 0;
}
