/// Problem Name: Little Elephant and Problem
/// Problem Link: https://codeforces.com/problemset/problem/220/A

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
  int n;
  cin >> n;
  vector <int> v(n);
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> v[i];
    a[i] = v[i];
  }
  sort(a.begin(), a.end());
  int d = 0;
  for (int i = 0;i < n;i++){
    if (v[i] != a[i])d++;
  }
  if (d <= 2)cout << "YES" << '\n';
  else cout << "NO" << '\n';
  return 0;
}
