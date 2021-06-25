/// Problem Name: Problem About Equation
/// Problem Link: https://codeforces.com/problemset/problem/174/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  int n, b;
  cin >> n >> b;
  vector <int> v(n);
  double b_sum = 0;
  int mx = 0;
  for (int i = 0;i < n;i++){
    cin >> v[i];
    b_sum += v[i];
    mx = max(mx, v[i]);
  }
  double a_sum = b_sum+b;
  double d = a_sum/n;
  if (d < mx)cout << "-1" << '\n';
  else {
    cout << fixed << setprecision(6);
    for (int i = 0;i < n;i++){
      cout << d-v[i] << '\n';
    }
  }
  return 0;
}
