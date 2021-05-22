/// Problem Name: Letters
/// Problem Link: https://codeforces.com/problemset/problem/978/C

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  Long n, m, el;
  cin >> n >> m;
  Long sum = 0;
  vector <Long> v;
  v.pb(0);
  for (int i = 0;i < n;i++){
    cin >> el;
    sum += el;
    v.pb(sum);
  }
  for (int i = 0;i < m;i++){
    cin >> el;
    Long low = 0;
    Long high = n;
    Long po;
    while (low <= high){
      Long mid = low + (high - low) / 2;
      if (el <= v[mid]){
        po = mid;
        high = mid-1;
      }else low = mid+1;
    }
    el -= v[po-1];
    cout << po << ' ' << el << '\n';
  }
  return 0;
}
