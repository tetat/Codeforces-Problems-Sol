/// Problem Name: Pair of Topics
/// Problem Link: https://codeforces.com/problemset/problem/1324/D

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
  }
  vector <int> b(n);
  for (int i = 0;i < n;i++){
    cin >> b[i];
  }
  vector <int> c(n);
  for (int i = 0;i < n;i++){
    c[i] = a[i]-b[i];
  }
  sort(c.begin(), c.end());
  Long ans = 0;
  for (int i = 1;i < n;i++){
    int L = 0;
    int R = i;
    int m = i;
    while (L <= R){
      int mid = L + (R-L)/2;
      if (c[mid]+c[i] > 0){
        m = mid;
        R = mid-1;
      }else L = mid+1;
    }
    ans += i - m;
  }
  cout << ans << '\n';
  return 0;
}
