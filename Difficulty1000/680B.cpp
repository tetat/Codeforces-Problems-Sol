/// Problem Name: Bear and Finding Criminals
/// Problem Link: https://codeforces.com/problemset/problem/680/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 6000;

int main()
{
  faster()
  int t, ca = 0;
  int n, a;
  cin >> n >> a;
  VE <int> v(n+10, 0);
  for (int i = 1;i <= n;i++){
    cin >> v[i];
  }
  int L = a-1;
  int R = a+1;
  int ans = 0;
  if (v[a])ans++;
  while (L > 0 || R <= n){
    if (L==0 && R<=n && v[R])ans++;
    else if (L>0 && R==n+1 && v[L])ans++;
    else if (v[L] && v[R])ans += 2;

    if (L != 0)L--;
    if (R != n+1)R++;
  }
  cout << ans << newline;
  return 0;
}
