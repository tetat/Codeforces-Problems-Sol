/// Problem Name: ConneR and the A.R.C. Markland-N
/// Problem Link: https://codeforces.com/problemset/problem/1293/A

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

const int N = 50;

int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    int n, s, k, el;
    cin >> n >> s >> k;
    map <II> m;
    for (int i = 0;i < k;i++){
      cin >> el;
      m[el]++;
    }
    int ans1 = 0;
    int ans2 = 0;
    int L = s;
    int R = s;
    while (L > 0){
      if (!m[L])break;
      ans1++;
      L--;
    }
    if (s == ans1 && m[1])ans1 = INT_MAX;
    while (R < n){
      if (!m[R])break;
      ans2++;
      R++;
    }
    if (n-s == ans2 && m[n])ans2 = INT_MAX;
    cout << min(ans1, ans2) << newline;
  }
  return 0;
}
