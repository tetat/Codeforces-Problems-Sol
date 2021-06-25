/// Problem Name: Classroom Watch
/// Problem Link: https://codeforces.com/problemset/problem/875/A

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
  int n;
  cin >> n;
  vector <int> v;
  for (int i = max(1, n-81);i < n;i++){
    int sum = i;
    int tm = i;
    while (tm){
      sum += tm%10;
      tm /= 10;
    }
    if (sum==n)v.pb(i);
  }
  int k = v.size();
  cout << k << '\n';
  for (int i = 0;i < k;i++){
    cout << v[i];
    if (i != k-1)cout << ' ';
  }if (k)cout << '\n';
  return 0;
}
