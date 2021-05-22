/// Problem Name: Johnny and Ancient Computer
/// Problem Link: https://codeforces.com/problemset/problem/1362/A

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

const int N = 1e5;

Long d[] = {8, 4, 2};

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long a, b;
    cin >> a >> b;
    if (a < b)swap(a, b);
    Long ans = -1;
    if (a%b==0){
      Long m = a/b;
      //cout << m << '\n';
      ans = 0;
      while (m%8==0 || m%4==0 || m%2==0){
        if (m%8==0){ans++;m/=8;continue;}
        if (m%4==0){ans++;m/=4;continue;}
        if (m%2==0){ans++;m/=2;}
      }
      if (m > 1)ans = -1;
    }
    cout << ans << '\n';
  }
  return 0;
}
