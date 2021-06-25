/// Problem Name: Valhalla Siege
/// Problem Link: https://codeforces.com/problemset/problem/975/C

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);//cout.tie(0);
  int tc, ca = 0;
  Long n, q;
  cin >> n >> q;
  vector <Long> a(n);
  for (int i = 0;i < n;i++){
    cin >> a[i];
    if (i)a[i] += a[i-1];
  }
  Long cut = 0;
  while (q--){
    Long rs;
    cin >> rs;
    int m = n;
    int L = 0;
    int R = n-1;
    while (L <= R){
      int mid = L + (R-L)/2;
      if (a[mid]-cut >= rs){
        m = mid;
        R = mid-1;
      }else L = mid+1;
    }
    //cout << "m " << m << '\n';
    if ((a[m]-cut)-rs == 0)m++;
    if (m >= n){
      cut = 0;
      cout << n << '\n';
    }else {
      cout << n-m << '\n';
      cut += rs;
    }
  }
  return 0;
}
