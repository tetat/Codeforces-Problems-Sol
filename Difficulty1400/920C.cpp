/// Problem Name: Swap Adjacent Elements
/// Problem Link: https://codeforces.com/problemset/problem/920/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define IO cin.tie(0),cout.tie(0)
#define ISWS ios::sync_with_stdio(0)
typedef long long Long;
void FastIO(){ISWS;IO;}

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  vector <int> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
    a[i]--;
  }
  string s;
  cin >> s;
  vector <int> ps(n+1, 0);
  int sum = 0;
  for (int i = 0;i < n;i++){
    if (i < n-1 && s[i]==49){
      sum++;
    }
    ps[i+1] = sum;
    //cout << sum << ' ';
  }//cout << '\n';
  string ans = "YES";
  for (int i = 0;i < n;i++){
    if (a[i] != i){
      int L = a[i];
      int R = i;
      if (L > R)swap(L, R);
      if ((ps[R]-ps[L]) != R-L){
        ans = "NO";
        break;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
