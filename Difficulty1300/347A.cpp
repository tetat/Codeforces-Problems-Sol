/// Problem Name: Difference Row
/// Problem Link: https://codeforces.com/problemset/problem/347/A

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

const int N = 1e3;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> v(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  swap(v[0], v[n-1]);
  for (int i = 0;i < n;i++){
    cout << v[i] << ' ';
  }cout << '\n';
  return 0;
}
