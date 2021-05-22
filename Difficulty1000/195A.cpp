/// Problem Name: Let's Watch Football
/// Problem Link: https://codeforces.com/problemset/problem/195/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int a, b, c;
  cin >> a >> b >> c;
  a *= c;
  int B = b*c;
  int low = 1;
  int high = a;
  int ans = 0;
  while (low <= high){
    int mid = low + (high-low)/2;
    if (a-(mid*b) <= B){
      ans = mid;
      high = mid-1;
    }else low = mid+1;
  }
  cout << ans << '\n';
  return 0;
}
