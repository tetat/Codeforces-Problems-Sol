/// Problem Name: Calculating Function
/// Problem Link: https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, i, sum = 0;
  cin >> n;
  long long ans;
  if (n%2 == 0){
    ans = n/2;
  }
  else {
    ans = n/2;
    ans = ans + 1;
    ans = -ans;
  }
  cout << ans << endl;
  return 0;
}
