/// Problem Name: Vile Grasshoppers
/// Problem Link: https://codeforces.com/problemset/problem/937/B

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

bool isprime(int n, int lim){
  for (int i = 3;i*i <= n && i <= lim;i += 1){
    if (n%i==0)return false;
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  int p, y;
  cin >> p >> y;
  int ans = -1;
  if (y%2==0)y--;
  for (int i = y;i > p;i -= 2){
    if (isprime(i, p)){
      ans = i;
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
