/// Problem Name: Eating Soup
/// Problem Link: https://codeforces.com/problemset/problem/1163/A

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

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n, m;
  cin >> n >> m;
  bool mark[n+1];
  for (int i = 1;i <= n;i++){
    mark[i] = true;
  }
  for (int i = 1;i <= n && m;i += 2){
    mark[i] = false;
    m--;
  }
  for (int i = 2;i <= n && m;i += 2){
    mark[i] = false;
    m--;
  }
  int ans = 0;
  int i = 1;
//  for (int i = 1;i <= n;i++){
//    if (mark[i])cout << 1 << ' ';
//    else cout << 0 << ' ';
//  }cout << '\n';
  while (i <= n){
    while (mark[i] == false && i <= n)i++;
    if (i > n)break;
    while (mark[i] == true && i <= n)i++;
    ans++;
  }
  cout << ans << '\n';
  return 0;
}
