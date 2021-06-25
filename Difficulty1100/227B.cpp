/// Problem Name: Effective Approach
/// Problem Link: https://codeforces.com/problemset/problem/227/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v(n+1);
  for (int i = 0;i < n;i++){
    cin >> el;
    v[el] = i+1;
  }
  int q;
  cin >> q;
  Long ff = 0;
  Long ss = 0;
  while (q--){
    cin >> el;
    ff += Long(v[el]);
    ss += Long(n-(v[el]-1));
  }
  cout << ff << ' ' << ss << '\n';
  return 0;
}
