/// Problem Name: Silly Mistake
/// Problem Link: https://codeforces.com/problemset/problem/1253/B

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

const int N = 1000000;
vector <int> mark(N+10, 0);

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t, ca = 0;
  int n, el;
  vector <int> v;
  vector <int> p;
  vector <int> ans;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  if (n%2){
    cout << "-1" << '\n';
    return 0;
  }
  int ok = 0;
  int cnt = 0;
  for (int i = 0;i < n;i++){
    if (v[i] < 0){
      ok--;
      cnt++;
      mark[-v[i]]++;
      if (ok < 0){
        ans.clear();
        break;
      }
      if (ok == 0){
        int l = p.size();
        bool check = false;
        for (int j = 0;j < l;j++){
          if (mark[p[j]] != 2){
            check = true;
            break;
          }
          mark[p[j]] = 0;
        }
        if (check){
          ans.clear();
          break;
        }
        p.clear();
        ans.pb(cnt);
        cnt = 0;
      }
    }
    else {
      mark[v[i]]++;
      cnt++;
      ok++;
      p.pb(v[i]);
      if (mark[v[i]] > 1){
        ans.clear();
        break;
      }
    }
  }
  int len = ans.size();
  int sum = 0;
  for (int i = 0;i < len;i++){
    sum += ans[i];
  }

  if (len == 0 || sum!=n)len = -1;
  cout << len << '\n';
  for (int i = 0;i < len;i++){
    cout << ans[i];
    if (i != len-1)cout << " ";
  }cout << '\n';
  return 0;
}
