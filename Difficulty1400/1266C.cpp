/// Problem Name: Diverse Matrix
/// Problem Link: https://codeforces.com/problemset/problem/1266/C

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 200000;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  int n, m;
  cin >> n >> m;
  if (n==1 && m==1)cout << 0 << '\n';
  else if (n==1 && m!=1){
    m++;
    for (int i = 2;i <= m;i++){
      cout << i;
      if (i != m)cout << " ";
    }cout << '\n';
  }
  else if (n!=1 && m==1){
    n++;
    for (int i = 2;i <= n;i++){
      cout << i << '\n';
    }
  }
  else {
    for (int i = 1;i <= n;i++){
      int tmp = m+i;
      for (int j = 1, el = tmp;j <= m;j++, el += tmp){
        cout << el;
        if (j != m)cout << " ";
      }cout << '\n';
    }
  }
  return 0;
}
